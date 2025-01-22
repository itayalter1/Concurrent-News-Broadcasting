#include "BoundedBuffer.h"
#include <iostream>
#include <cstring>

// Constructor initializes semaphores and mutex for thread synchronization
BoundedBuffer::BoundedBuffer(int size) : maxSize(size) {
    sem_init(&full, 0, 0);
    sem_init(&empty, 0, size);
    pthread_mutex_init(&mutex, NULL);
}

// Destructor cleans up synchronization primitives
BoundedBuffer::~BoundedBuffer() {
    sem_destroy(&full);
    sem_destroy(&empty);
    pthread_mutex_destroy(&mutex);
}

// Thread-safe insertion of string into buffer using semaphores and mutex
void BoundedBuffer::insert(char* s) {
    sem_wait(&empty);
    pthread_mutex_lock(&mutex);

    buffer.push(s);

    pthread_mutex_unlock(&mutex);
    sem_post(&full);
}

// Signals completion of production to waiting consumers
void BoundedBuffer::signalDone() {
    pthread_mutex_lock(&mutex);
    isDone = true;
    pthread_mutex_unlock(&mutex);
    sem_post(&full);  // Signal waiting threads
}

// Thread-safe removal of string from buffer using semaphores and mutex
char* BoundedBuffer::remove() {
    sem_wait(&full);
    pthread_mutex_lock(&mutex);

    char* s = nullptr;

    if (!buffer.empty()) {
        s = buffer.front();
        buffer.pop();
    }

    pthread_mutex_unlock(&mutex);
    sem_post(&empty);

    return s;
}
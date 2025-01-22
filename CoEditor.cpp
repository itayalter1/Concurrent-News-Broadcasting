#include "CoEditor.h"
#include <iostream>
#include <cstring>
#include <unistd.h>

// Constructor initializes input and output queue pointers
CoEditor::CoEditor(BoundedBuffer* inputQueue, BoundedBuffer* outputQueue)
        : inputQueue(inputQueue), outputQueue(outputQueue) {}

// Main editing loop that processes messages from input queue
void CoEditor::edit() {
    while (true) {
        char* message = inputQueue->remove();
        if (std::strcmp(message, "DONE") == 0) {
            outputQueue->insert(message);
            break;
        }
        usleep(100000); // Simulate editing delay
        outputQueue->insert(message);
    }
}

// Static thread start function
void* CoEditor::start(void* arg) {
    CoEditor* coEditor = static_cast<CoEditor*>(arg);
    coEditor->edit();
    return nullptr;
}

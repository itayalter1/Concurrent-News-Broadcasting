
---

# **Concurrent News Broadcasting Simulation**

This project simulates a news broadcasting system with multiple producers, dispatchers, co-editors, and a screen manager. It demonstrates the use of concurrent programming and synchronization mechanisms such as semaphores to manage communication between different parts of the system.

---

## **How the System Works**

The system consists of four types of participants:

1. **Producers:** Create news stories in a format of "producer <i> <type> <j>" and send them through their private queues to the dispatcher.
2. **Dispatcher:** Uses a Round Robin algorithm to collect stories from the producers and sorts them into appropriate dispatcher queues based on the story type (SPORTS, NEWS, WEATHER).
3. **Co-Editors:** Receive the stories from the dispatcher, simulate an editing process, and pass them to the screen manager.
4. **Screen Manager:** Displays the stories it receives on the screen and shows a final "DONE" message once all stories have been processed.

---

## **How to Run the Simulation**

### **Prerequisites**

Make sure you have the following:

1. **C++ Compiler:** Ensure you have a working C++ compiler like g++ or clang.
2. **Make:** Make sure `make` is installed to build the project using the provided Makefile.

### **Steps to Run the Program**

#### **Step 1: Clone the Repository**
Clone the repository to your local machine:
```bash
git clone https://github.com/itayalter1/Concurrent-News-Broadcasting.git
```

#### **Step 2: Compile the Program**
Navigate to the project directory and compile the program:
```bash
cd Concurrent-News-Broadcasting
make
```

#### **Step 3: Run the Simulation**
Run the program with a configuration file as a command-line argument:
```bash
./ex4.out config1.txt
```

You can use different configuration files (`config1.txt`, `config2.txt`, `config3.txt`) to simulate different producer setups.

### **Configuration File Format**

The configuration file should follow this format:
```
PRODUCER 1
[number of products]
queue size = [size]

PRODUCER 2
[number of products]
queue size = [size]

...

Co-Editor queue size = [size]
```

---

## **Files and Directories**

- **Makefile:** The build file to compile the project.
- **config1.txt, config2.txt, config3.txt:** Sample configuration files.
- **Producer.cpp, CoEditor.cpp, Dispatcher.cpp, etc.:** Source files implementing the system's participants.
- **BoundedBuffer.cpp:** Implements the thread-safe bounded buffer used in the simulation.

---

## **Technologies Used**

- **Language:** C++
- **Synchronization Mechanisms:** Semaphores, Mutex
- **Concurrency:** Multi-threading

---

## **Future Improvements**

- Implement better logging and error handling.
- Add a more complex editing mechanism in the Co-Editor stage.
- Extend the simulation with more types of stories or additional participants.

---

## **Contact**

For questions or suggestions, feel free to reach out:

- **Email:** itayalter1@gmail.com  
- **GitHub:** [itayalter1](https://github.com/itayalter1)

---


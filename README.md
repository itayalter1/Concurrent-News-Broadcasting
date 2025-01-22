הנה ה-README המעודכן עם החלק שציינת:

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

## **How to Run the Project**

### **Prerequisites**

Before running the project, ensure that you have the following tools installed:

1. **C++ Compiler:**
   - **Linux:** You need `g++` to compile the project.
   - **Windows:** If you are using Windows, we recommend using WSL (Windows Subsystem for Linux) for a seamless development experience.

---

### **Steps to Run the Program**

#### **Option 1: Running on Linux or WSL**
If you are using **Linux** or **Windows with WSL** (Windows Subsystem for Linux), follow these steps:

1. Install the necessary dependencies:
   - For **Linux** or **WSL**:
     ```bash
     sudo apt update
     sudo apt install g++ make
     ```

2. Clone the repository:
   ```bash
   git clone https://github.com/itayalter1/Concurrent-News-Broadcasting.git
   ```

3. Navigate to the project directory:
   ```bash
   cd Concurrent-News-Broadcasting
   ```

4. Compile and run the project:
   ```bash
   make
   ./ex4.out config.txt
   ```
   
You can use different configuration files (`config1.txt`, `config2.txt`, `config3.txt`) to simulate different producer setups.
**Note**: This option is recommended for **Linux** or **WSL** users.

---

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

כעת ה-README כולל את כל ההסברים כיצד להריץ את הפרויקט על לינוקס, WSL ו-Windows.

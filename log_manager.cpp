#include "log_manager.h"
#include <ctime>

// Function to get current timestamp
std::string getCurrentTimestamp() {
    std::time_t now = std::time(0);
    char* dt = std::ctime(&now);
    dt[strlen(dt) - 1] = '\0';  // Remove newline character
    return std::string(dt);
}

// Function to log authentication events
void logEvent(const std::string& username, const std::string& event) {
    std::ofstream logFile("auth_log.txt", std::ios::app);
    if (logFile.is_open()) {
        logFile << "[" << getCurrentTimestamp() << "] " << username << " - " << event << std::endl;
        logFile.close();
    } else {
        std::cerr << "Error: Unable to open authentication log file." << std::endl;
    }
}

// Function to log system call execution
void logSystemCall(const std::string& username, const std::string& command) {
    std::ofstream logFile("syscall_log.txt", std::ios::app);
    if (logFile.is_open()) {
        logFile << "[" << getCurrentTimestamp() << "] " << username << " executed command: " << command << std::endl;
        logFile.close();
    } else {
        std::cerr << "Error: Unable to open system call log file." << std::endl;
    }
}

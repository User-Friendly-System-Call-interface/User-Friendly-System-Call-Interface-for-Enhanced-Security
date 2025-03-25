#include "syscall_handler.h"
#include <cstdlib>

void secureSystemCall(const std::string& username, const std::string& command) {
    std::string role = getUserRole(username);
    
    if (role == "Admin" || (role == "User" && (command == "ls" || command == "pwd"))) {
        std::cout << username << " executing command: " << command << std::endl;
        
        int status = system(command.c_str());
        if (status == -1) {
            std::cout << "Error: System call execution failed!" << std::endl;
            logError("System call failed for user: " + username + " - Command: " + command);
        } else {
            logEvent(username, "Successfully executed system call: " + command);
        }
    } else {
        std::cout << "Unauthorized command or user role restriction!" << std::endl;
        logEvent(username, "Attempted unauthorized system call: " + command);
    }
}

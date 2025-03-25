#include "log_manager.h"

void authenticateUser(const std::string& username, const std::string& password) {
    if (username == "Kavya" && password == "Kavya123") {
        logEvent(username, "Login successful");
        std::cout << "Welcome, " << username << "!" << std::endl;
    } else {
        logEvent(username, "Login failed");
        std::cout << "Invalid credentials!" << std::endl;
    }
}

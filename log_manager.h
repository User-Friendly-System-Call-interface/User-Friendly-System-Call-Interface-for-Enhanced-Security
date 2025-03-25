#ifndef LOG_MANAGER_H
#define LOG_MANAGER_H

#include <iostream>
#include <fstream>
#include <string>

void logEvent(const std::string& username, const std::string& event);
void logSystemCall(const std::string& username, const std::string& command);

#endif

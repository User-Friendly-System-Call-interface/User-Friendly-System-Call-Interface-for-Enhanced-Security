#ifndef SYSCALL_HANDLER_H
#define SYSCALL_HANDLER_H

#include <iostream>
#include <string>
#include "auth_module.h"
#include "log_manager.h"

void secureSystemCall(const std::string& username, const std::string& command);

#endif

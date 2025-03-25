	#ifndef AUTH_MODULE_H
#define AUTH_MODULE_H

#include <string>
#include <unordered_map>

bool isValidUser(const std::string& username, const std::string& password);
std::string hashPassword(const std::string& password);

#endif

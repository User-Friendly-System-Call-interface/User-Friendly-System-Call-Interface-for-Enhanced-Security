#ifndef USERS_H
#define USERS_H

#include <unordered_map>
#include <string>

// Users with hashed passwords and roles
std::unordered_map<std::string, std::pair<std::string, std::string>> users = {
    {"admin", {"5e884898da28047151d0e56f8dc6292773603d0d6aabbdd65a6ffb6f5f8e9d4", "Admin"}},
    {"user1", {"bcb2c9ee083dc64f6c865170d2211a2d2f7bc8e2781c8f82ea51e55fda4f616c", "User"}},
    {"user2", {"cd73502828457d15655bbd7a63fb0bc8e595d8ad2de55b81b6b2363d73ef4b92", "User"}}
};

#endif

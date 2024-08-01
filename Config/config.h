#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <unordered_map>

namespace config {

    std::unordered_map<std::string, std::string> readConfigFromUser();


    std::unordered_map<std::string, std::string> readConfig(const std::string& filename);

 
    void writeConfig(const std::string& filename, const std::unordered_map<std::string, std::string>& config);
}
#include"config.h"


namespace config {
    std::unordered_map<std::string, std::string> readConfigFromUser() {
        std::unordered_map<std::string, std::string> config;
        std::cout << "Enter Author's name";
        std::getline(std::cin, config["Author"]);
        std::cout << "Enter Author's email";
        std::getline(std::cin, config["email"]);
        return config;
    }




    std::unordered_map<std::string, std::string> readConfig(const std::string& filename) {
        std::unordered_map<std::string, std::string> config;
        std::ifstream file(filename);
        if (file.is_open()) {
            std::string line;
            while (std::getline(file, line)) {
                size_t delimiterPos = line.find('=');
                if (delimiterPos != std::string::npos) {
                    std::string key = line.substr(0, delimiterPos);
                    std::string value = line.substr(delimiterPos + 1);
                    config[key] = value;
                }
            }
            file.close();
        }
        return config;
    }

    // Function to write configuration file
    void writeConfig(const std::string& filename, const std::unordered_map<std::string, std::string>& config) {
        std::ofstream file(filename);
        if (file.is_open()) {
            for (const auto& pair : config) {
                file << pair.first << "=" << pair.second << "\n";
            }
            file.close();
        }
    }
}
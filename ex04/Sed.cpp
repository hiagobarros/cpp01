#include "Sed.hpp"
#include <fstream>
#include <iostream>

std::string replaceAll(const std::string& line, const std::string& s1, const std::string& s2) {
    std::string result;
    size_t pos = 0;
    size_t found;

    while ((found = line.find(s1, pos)) != std::string::npos) {
        result.append(line, pos, found - pos);
        result.append(s2);
        pos = found + s1.length();
    }
    result.append(line, pos);
    return result;
}

bool Sed::replaceInFile(const std::string& filename, const std::string& s1, const std::string& s2) {
    if (s1.empty()) {
        std::cerr << "Error: s1 cannot be empty" << std::endl;
        return false;
    }

    std::ifstream inFile(filename);
    if (!inFile) {
        std::cerr << "Error: cannot open input file." << std::endl;
        return false;
    }

    std::ofstream outFile(filename + ".replace");
    if (!outFile) {
        std::cerr << "Error: cannot create output file." << std::endl;
        return false;
    }

    std::string line;
    while (std::getline(inFile, line)) {
        outFile << replaceAll(line, s1, s2) << '\n';
    }

    return true;
}

#include "Sed.hpp"
#include <iostream>

int main(int argc, char** argv) {
    if (argc != 4) {
        std::cerr << "Usage: ./program <filename> <s1> <s2>" << std::endl;
        return 1;
    }

    std::string filename = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];

    if (!Sed::replaceInFile(filename, s1, s2)) {
        return 1;
    }

    return 0;
}

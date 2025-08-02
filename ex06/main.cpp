#include "Harl.hpp"
#include <iostream>

int main(int argc, char **argv) {
    if (argc != 2) {
        std::cerr << "Usage: ./harlFilter <level>" << std::endl;
        return 1;
    }

    std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    std::string input = argv[1];
    int levelIndex = -1;

    for (int i = 0; i < 4; i++) {
        if (input == levels[i]) {
            levelIndex = i;
            break;
        }
    }

    Harl harl;

    switch (levelIndex) {
        case 0:
            harl.complain("DEBUG");
            //[[fallthrough]];
        case 1:
            harl.complain("INFO");
            //[[fallthrough]];
        case 2:
            harl.complain("WARNING");
            //[[fallthrough]];
        case 3:
            harl.complain("ERROR");
            break;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
    }

    return 0;
}

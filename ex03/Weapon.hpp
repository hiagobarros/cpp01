


#ifndef WEAPON_HPP
#define WEAPON_HPP

#define GRN "\033[32m"
#define BUE "\033[34m"
#define RST "\033[0m"
#define RED "\033[31m"


#include <iostream>

class Weapon {

    private:
        std::string type;
    public:
        Weapon(std::string type)
        {
            this->type = type;
        }
        
        std::string getType() const;

        void setType(std::string newType);

};
#endif
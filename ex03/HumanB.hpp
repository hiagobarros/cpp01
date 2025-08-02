#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>

//#include <iostream>
#include "Weapon.hpp"

class HumanB
{
    private:
        std::string _name;
        Weapon* _weapon;

    public:
        HumanB(std::string name) : _name(name), _weapon(nullptr) {}

        void setWeapon(Weapon& weapon);

        void attack();
};

#endif
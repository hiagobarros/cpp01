


#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>

class Zombie
{
    private:
        std::string name;
    public:
        Zombie(std::string name){
            this->name = name;
        };
        ~Zombie();

        void announce();

};

        Zombie* newZombie( std::string name );
        void randomChump( std::string name );
#endif
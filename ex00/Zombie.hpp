

#ifndef Zombie_HPP
#define Zombie_HPP

#define GRN "\033[32m"
#define BUE "\033[34m"
#define RST "\033[0m"
#define RED "\033[31m"

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

        void announce( void );

};

        Zombie* newZombie( std::string name );
        void randomChump( std::string name );
#endif
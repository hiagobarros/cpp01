


#ifndef Zombie_HPP
#define Zombie_HPP

#define GRN "\033[32m"
#define BUE "\033[34m"
#define RST "\033[0m"
#define RED "\033[31m"
#define YLW "\033[33m"


#include <iostream>

class Zombie
{
    private:
        std::string _name;
    public:
        Zombie(std::string name = ""){
            this->_name = name;
        };
        ~Zombie();
        void setName(std::string name)
        {
            this->_name = name;
        }

        void announce( void );

};
        Zombie* newZombie( std::string name );
        void randomChump( std::string name );
        Zombie* zombieHorde( int N, std::string name );
#endif
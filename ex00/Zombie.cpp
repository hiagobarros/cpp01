

#include"Zombie.hpp"


    Zombie* newZombie( std::string name )
    {
        Zombie* zombie = new Zombie(name);
        return(zombie);
    };

    void randomChump( std::string name ){
        Zombie zombie = Zombie(name);
        zombie.announce();
    };

    void Zombie::announce()
    {
        std::cout<<"BRAIN say the zombie: "<<name<<std::endl;
    }

    Zombie::~Zombie(){
            std::cout<<"Zombie "<<name<<" deviteded!!"<<std::endl;
        };

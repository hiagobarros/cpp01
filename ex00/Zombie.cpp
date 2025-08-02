

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

    void Zombie::announce( void )
    {
        std::cout<<GRN<<name<<": BraiiiiiiinnnzzzZ.."<<RST<<std::endl;
    }

    Zombie::~Zombie(){
            std::cout<<RED<<"Zombie: "<<name<<" destroyed!!!"<<RST<<std::endl;
        };


#include"Zombie.hpp"


int main ()
{
    Zombie* zombie = newZombie("Tung Tung Tung Sahur");
    zombie->announce();
    delete zombie;
    randomChump("Tralalero Tralala");
    return(0);
}
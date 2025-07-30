
#include"Zombie.hpp"


int main ()
{
    Zombie* zombie = newZombie("tuntuntunsarur(heap)");
    zombie->announce();
    delete zombie;
    randomChump("pralareropralala(stack)");
    return(0);
}

#include "Zombie.hpp"



int main()
{
    int N = 10;
    Zombie* zombies = zombieHorde(N,"tun");
    std::cout<<RST<<"first zombie: "<<zombies<<" -> ";
    zombies->announce();
    delete[] zombies;
    return (0);
}
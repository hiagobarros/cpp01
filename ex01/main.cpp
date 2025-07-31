
#include "Zombie.hpp"



int main()
{
    int N = 10;
    Zombie* zombies = zombieHorde(N,"tun");
    delete[] zombies;
    return (0);
}
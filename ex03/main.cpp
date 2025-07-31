
#include "HumanA.hpp"

int main()
{
    Weapon* gun = new Weapon("shotgun");
    HumanA* a = new HumanA("person", *gun);

    a->attack();
    return (0);
}
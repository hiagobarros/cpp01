
#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{


    {
        Weapon club = Weapon("crude spiked club");
        HumanA bob("Bob", club);
        bob.attack();
        club.setType("some other type of club");
        bob.attack();
    }
    {
        Weapon club = Weapon("crude spiked club");
        HumanB jim("Jim");
        jim.attack();
        jim.setWeapon(club);
        jim.attack();
        club.setType("some other type of club");
        jim.attack();
    }

    /*Weapon* gun = new Weapon("shotgun");
    Weapon* &gun_ref = gun;
    HumanA* a = new HumanA("bird-person-a", *gun);

    
    
    //Weapon* gun = new Weapon("shotgun");
    HumanB* b = new HumanB("bird-person-b");

    a->attack();
    b->attack();
    b->setWeapon( *gun_ref);
    b->attack();*/
    return (0);
}
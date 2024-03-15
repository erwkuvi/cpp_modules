#include "HumanB.hpp"
#include "HumanA.hpp"
#include "Weapon.hpp"
#include <iostream>

int	main(void)
{
/*Human A Testing*/
	Weapon projectile = Weapon("Machine gun");
	HumanA erwin("ErwinA", projectile);
	erwin.attack();
	projectile.setType("Hammer"); /*changing ErwinA's Weapon to "hammer"*/
	erwin.attack();
	std::cout << "Human A finished" << std::endl;
	std::cout << std::endl;
/*Human B Testing*/
	Weapon club = Weapon("Tank"); //new Weapon setted to "tank"
	HumanB daniel("DanielB");
	daniel.attack(); //daniel doesn't have a weapon yet
	daniel.setWeapon(club); //assign club to daniel
	daniel.attack(); //daniel attacks with club ("Tank")
	club.setType("Knife"); //club instance type is changed to knife
	daniel.attack();
	club.setType(""); //club instance type is changed to nothing (blank space)
	daniel.attack();
	std::cout << "Human B finished" << std::endl;
	std::cout << std::endl;
	return 0;
}

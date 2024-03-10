#include "HumanB.hpp"
#include "HumanA.hpp"
#include "Weapon.hpp"
#include <iostream>

int	main(void)
{
	Weapon projectile = Weapon("crude spiked projectile");

	HumanA erwin("ErwinA", projectile);
	erwin.attack();

	projectile.setType("hammer");
	erwin.attack();

	std::cout << std::endl;
	std::cout << "Human A finished" << std::endl;
	std::cout << std::endl;

	Weapon club = Weapon("tank");
	HumanB daniel("DanielB");
	daniel.attack();
	daniel.setWeapon(club);
	daniel.attack();
	club.setType("hammer");
	daniel.attack();
	return 0;
}

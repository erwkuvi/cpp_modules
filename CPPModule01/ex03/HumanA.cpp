#include "HumanA.hpp"
#include <iostream>
#include <string>

HumanA::HumanA(std::string humanAName, std::string humanAWeapon) : _name(humanAName), _weaponA(humanAWeapon){}

HumanA::~HumanA(void)
{
	std::cout << "Destructor HumanA called" << std::endl;
}

void HumanA::attack(void)
{
	std::cout << _name << "attacks with their" << _weaponA.getType() << std::endl;
}

#include "Weapon.hpp"
#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string humanBName) : _name(humanBName), _weaponB(nullptr){}

HumanB::~HumanB(void)
{
	std::cout << "Destructor HumanB called" << std::endl;
}

void HumanB::setWeapon(const Weapon& newWeapon)
{
	if (!newWeapon.getType().empty())
		_weaponB = &newWeapon; 
	else
		std::cerr << "Error: no weapon" << std::endl;
}

bool isOnlyBlankSpaces(const std::string& str) 
{
    return str.find_first_not_of(' ') == std::string::npos;
}

void HumanB::attack(void) const
	{
		if (_weaponB != nullptr && !isOnlyBlankSpaces(_weaponB->getType()))
		{
			std::cout << _name << " attacks with their " << _weaponB->getType() << std::endl;
		}
			
		else
			std::cout <<  _name << " attacks with bare hands " << std::endl;
	} 

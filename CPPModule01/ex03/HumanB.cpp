#include "HumanB.hpp"
#include "Weapon.hpp"
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
		std::cerr << "Error: empty weapon" << std::endl;
}

void HumanB::attack(void)
	{
		if (_weaponB != nullptr)
			std::cout <<  _name << " attacks with a " << _weaponB->getType() << std::endl;
		else
			std::cout <<  _name << " attacks with bare hands " << std::endl;
	} 

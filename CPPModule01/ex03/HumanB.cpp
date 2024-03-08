
#include "HumanB.hpp"
#include "Weapon.hpp"
#include <iostream>
#include <ostream>

HumanB::HumanB(std::string humanBName) : _name(humanBName), _weaponB(nullptr){}

HumanB::~HumanB(void)
{
	std::cout << "Destructor HumanB called" << std::endl;
}

void HumanB::setWeapon(Weapon& newWeapon)
{
	_weaponB = new Weapon(newWeapon.getType());
}

void HumanB::attack(void)
	{
		if (_weaponB != 0) 
			std::cout <<  _name << "attacks with their" << _weaponB->getType() << std::endl;
		else
			std::cout <<  _name << "attacks with bare hands" << std::endl;
	} 

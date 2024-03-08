#include "Weapon.hpp"
#include <iostream>

Weapon::Weapon(std::string initialType) : _type(initialType){}

Weapon::~Weapon(void)
{
	std::cout << "Destructor Weapon called" << std::endl;
}

const std::string& Weapon::getType(void) const
{
	return _type;
}

void Weapon::setType(const std:: string& type)
{
	_type = type;
}

#include <iostream>
#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) : _name(name), ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name) 
{
	std::cout << "DiamondTrap constructor called" << std::endl;
	FragTrap::_hitPoints = 100; //100
	ScavTrap::_energyPoints = 50;//50
	FragTrap::_attackDamage = 30;//30
}

DiamondTrap::DiamondTrap(const DiamondTrap& rhs) : ClapTrap(rhs), FragTrap(rhs), ScavTrap(rhs)
{
	std::cout << "Diamond Copy constructor" << std::endl; 
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& rhs)
{
	if (this != &rhs)
	{
		ClapTrap::operator=(rhs);	
	}
	return *this;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DiamondTrap Destructor called" << std::endl;
}

void DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI(void)
{
	std::cout << "[Who am I]" << std::endl;
	std::cout << "ClapTrap Name: " << ClapTrap::_name << std::endl;
	std::cout << "Name: " << this->_name << std::endl;
//	std::cout << "Hit Points: " << this->_hitPoints << std::endl;
//	std::cout << "Energy Points: " << this->_energyPoints << std::endl;
//	std::cout << "Attack Damage: " << this->_attackDamage << std::endl;
} 

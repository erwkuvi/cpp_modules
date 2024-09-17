#include <iostream>
#include "DiamondTrap.hpp"
#include "FragTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), FragTrap(name), ScavTrap(name) , _name(name), _tmpEp(ScavTrap::_energyPoints), _tmpAd(FragTrap::_attackDamage)
{
	std::cout << "DiamondTrap constructor called" << std::endl;
	//FragTrap::_hitPoints = 100; //100
	ScavTrap::_energyPoints = _tmpEp;//50
	FragTrap::_attackDamage = _tmpAd;//30
																	 //
																	 //
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

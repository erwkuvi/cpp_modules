#include "ClapTrap.hpp"
#include <ostream>
#include <string>
#include <iostream>

ClapTrap::ClapTrap (std::string name) : _name (name), _hitPoints(10), _energyPoints(10), _attackDamage(0) 
{
	std::cout << "Constructor is called" << std::endl;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "Destructor is called" << std::endl;
}

void  ClapTrap::attack(const std::string& target) //<target> loses _attackDamage hit points && loses 1 _energyPoints
{
	if (!_energyPoints)
		std::cout << RED << "No energy points available" << RESET << std::endl;
	else
	{
		std::cout << YELLOW << _name << RESET << "attacks " << target << ", causing" <<  _attackDamage << "points of damage!" << std::endl;
		std::cout << YELLOW << "-1 Energy Point" << RESET << std::endl;
		--_energyPoints;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << _name << " is being damaged, losing " << amount << " of hit points" << std::endl;  
	_hitPoints -= amount;
}

void ClapTrap::beRepaired(unsigned int amount) //It gets <amount> _hitPoints back && loses 1 _energyPoints
{
	if (!_energyPoints)
		std::cout << RED << "No energy points available" << RESET << std::endl;
	else
	{
		std::cout << _name << " is being repaired and gets " << amount << " of hit points back" << std::endl;  
		_hitPoints += amount; 
		std::cout << YELLOW << "-1 Energy Point" << RESET << std::endl;
		--_energyPoints;
	}
}

unsigned int ClapTrap::getter(std::string prop) const
{
	if (prop == "hp")
		return _hitPoints;
	else if (prop == "ep")
		return _energyPoints;
	else if (prop == "ad")
		return _attackDamage;
	return 0;
}

std::ostream& operator<<(std::ostream& output, const ClapTrap& instance)
{
	output << "->Current Hit Points:" << YELLOW << instance.getter("hp")<< RESET << " ->Energy Points:" << MAGENTA << instance.getter("ep") << RESET << " ->Attack Damage:"<< RED << instance.getter("ad") << RESET << std::endl;  
	return output;
}

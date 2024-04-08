#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) 
{
	std::cout << RED << "ScavTrap constructor called" << RESET << std::endl;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << RED << "ScavTrap destructor called" << RESET << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << YELLOW << "ScavTrap " << ClapTrap::namegetter() << " is now on Gate Keeper mode" << RESET << std::endl;
}


void attack(const std::string& target)
{
	if (!_energyPoints)
		std::cout << RED << "No energy points available" << RESET << std::endl;
	else
	{
		std::cout << YELLOW << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage! [-1 EP]" << std::endl;
		//std::cout << _name << ": -1 Energy Point" << RESET << std::endl;
		--_energyPoints;
	}
}

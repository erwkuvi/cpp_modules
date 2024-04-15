#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap("N/A", 100, 50, 30)
{
	std::cout << RED << "ScavTrap Default constructor called" << RESET << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name, 100, 50, 20) 
{
	std::cout << RED << "ScavTrap constructor called" << RESET << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& rhs) : ClapTrap(rhs)
{
	std::cout << RED << "ScavTrap copy constructor called" << RESET << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& rhs)
{
	if (this != &rhs) 
		ClapTrap::operator=(rhs);
	return *this;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << RED << "ScavTrap destructor called" << RESET << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << YELLOW << "ScavTrap " << ClapTrap::namegetter() << " is now on Gate Keeper mode" << RESET << std::endl;
}

void ScavTrap::attack(const std::string& target) 
{
	if (!this->_energyPoints)
		std::cout << RED << "ScavTrap " << _name << " cannot attack, no energy points available" << RESET << std::endl;
	else
	{
		std::cout << YELLOW << "ScavTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage! [-1 EP]" << RESET << std::endl;
		--_energyPoints;
	}
} 

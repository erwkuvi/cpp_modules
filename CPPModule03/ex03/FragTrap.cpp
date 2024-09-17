#include "FragTrap.hpp"
#include "ClapTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << BLUE << "FragTrap: Constructor called" << RESET << std::endl; 
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 60;
}

FragTrap::FragTrap (const FragTrap& instance) : ClapTrap(instance)
{
	std::cout << BLUE << "FragTrap: Copy constructor called" <<  RESET << std::endl; 
}

FragTrap& FragTrap::operator=(const FragTrap& rhs)
{
	if (this != &rhs)
		ClapTrap::operator=(rhs);
	return *this;
}
FragTrap::~FragTrap(void)
{
	std::cout << BLUE << "FragTrap: Destructor called" << RESET << std::endl; 
}

void FragTrap::attack(const std::string& target)
{
	if (!this->_energyPoints)
		std::cout << RED << "FragTrap: " << _name << " cannot attack, no energy points available" << RESET << std::endl;
	else
	{
		std::cout << YELLOW << "FragTrap: " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage! [-1 EP]" << RESET << std::endl;
		--_energyPoints;
	}
}

void FragTrap::highFives()
{
	std::cout << MAGENTA << _name << " would be really happy if it would get a high five." << RESET << std::endl;
}

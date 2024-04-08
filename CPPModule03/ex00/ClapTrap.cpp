#include "ClapTrap.hpp"

ClapTrap::ClapTrap (std::string name) : _name (name), _hitPoints(10), _energyPoints(10), _attackDamage(0) 
{
	std::cout << "Constructor is called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& rhs)
{
	operator=(rhs);
}

ClapTrap& ClapTrap::operator=(const ClapTrap& rhs) 
{
	if (this != &rhs)
	{
		_name = rhs._name;
		_hitPoints = rhs._hitPoints;
		_energyPoints = rhs._energyPoints;
		_attackDamage = rhs._attackDamage;
	}
	return *this;
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
		std::cout << YELLOW << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage! [-1 EP]" << std::endl;
		//std::cout << _name << ": -1 Energy Point" << RESET << std::endl;
		--_energyPoints;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << RED << _name << " is being damaged, losing " << amount << " of hit points" << RESET << std::endl;  
	_hitPoints -= amount;
}

void ClapTrap::beRepaired(unsigned int amount) //It gets <amount> _hitPoints back && loses 1 _energyPoints
{
	if (!_energyPoints)
		std::cout << RED << "No energy points available" << RESET << std::endl;
	else
	{
		std::cout << MAGENTA << _name << " is being repaired and gets " << amount << " of hit points back! [-1 EP]"  << RESET << std::endl;  
		_hitPoints += amount; 
		//std::cout << _name << YELLOW << ": -1 Energy Point" << RESET << std::endl;
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

void ClapTrap::setDamagePowerUp(int amount)
{
	if (amount < 0 && -amount <= _attackDamage)
		_attackDamage -= -amount;
	else
		_attackDamage += amount;
}

std::string ClapTrap::namegetter(void) const
{
	return _name;
}
std::ostream& operator<<(std::ostream& output, const ClapTrap& instance)
{
	output << "\n" << BLUE << instance.namegetter() <<" [STATS]\nHit Points:" << instance.getter("hp") << "\nEnergy Points:" << instance.getter("ep") << "\nAttack Damage:"<< instance.getter("ad") << RESET;
	return output;
}

#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie(std::string name) : _name(name){}

Zombie::~Zombie(void)
{
	std::cout << _name << ": destroyed" << std::endl;
}

std::string	Zombie::getName(void) const
{
	return _name;
}

void	Zombie::setName(std::string name)
{
	this->_name = name;
}

void	Zombie::announce(void) const
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}




#include "Zombie.hpp"

Zombie::Zombie(/* args */)
{
}

Zombie::~Zombie(std::string &name)
{

}

std::string	Zombie::getName(void) const
{
	return _name;
}

void	Zombie::setName(std::string name)
{
	this->_name = name;
}

void	Zombie::announce(void)
{
	std::cout << getName(void) << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie*	Zombie::newZombie(std::string name)
{
	setName(name);

}

void	Zombie::randomChump(std::string name)
{
	setName(name);
	announce(void);
}

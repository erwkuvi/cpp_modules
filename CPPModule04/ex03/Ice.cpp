#include "Ice.hpp"
#include <iostream>

Ice::Ice() : AMateria("ice")
{
	//std::cout << "Ice Default constructor called" << std::endl;
}

Ice::Ice(const Ice& instance): AMateria("ice")
{
	//std::cout << "Ice Copy constructor called" << std::endl;
	operator=(instance);
}

Ice& Ice::operator=(const Ice& rhs)
{
	if (this != &rhs)
		{
			AMateria::operator=(rhs);//implementation of the copying
		}
	return *this;
}

Ice::~Ice(void) //
{
	//std::cout << "Ice Destructor called" << std::endl;
}

AMateria* Ice::clone(void) const
{
	return new Ice(*this);
}

void Ice::use(ICharacter& target)
{
	std::cout << BLUE << "* shoots an ice bolt at " << target.getName() <<" *" << RESET << std::endl;
}

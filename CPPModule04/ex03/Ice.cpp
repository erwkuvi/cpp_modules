#include "Ice.hpp"
#include "AMateria.hpp"
#include <string>
#include <iostream>

Ice::Ice(void) : AMateria("ice")
{
	std::cout << "Ice Default constructor called" << std::endl; 
}

Ice::Ice(const Ice& instance): AMateria("cure")
{
	std::cout << "Ice Copy constructor called" << std::endl; 
	operator=(instance);
}

Ice& Ice::operator=(const Ice& rhs)
{
	if (this != &rhs)
		{
			//implementation of the copying
		}
	return *this;
}

Ice::~Ice(void) //
{
	std::cout << "Ice Destructor called" << std::endl; 
}

	//Further members implementations ..
virtual AMateria* clone(const AMateria& instance)
{
	if (instance.getType() == "ice")
	{
		AMateria* clone = new AMateria();

	}
	return clone;
}
virtual void use(ICharacter& target)
{

}

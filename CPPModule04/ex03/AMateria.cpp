#include "AMateria.hpp"
#include <string>
#include <iostream>

AMateria::AMateria(void) 
{
	std::cout << "AMateria Default constructor called" << std::endl; 
}

AMateria::AMateria(const std::string type) : _type(type)
{
	std::cout << "AMateria Constructor called" << std::endl; 
}

AMateria::AMateria(const AMateria& instance)
{
	std::cout << "AMateria Copy constructor called" << std::endl; 
	operator=(instance);
}

AMateria& AMateria::operator=(const AMateria& rhs)
{
	if (this != &rhs)
		{
			//implementation of the copying
		}
	return *this;
}

AMateria::~AMateria(void) //
{
	std::cout << "AMateria Destructor called" << std::endl; 
}

	//Further members implementations ..

const std::string& AMateria::getType() const
{
	return _type;
}

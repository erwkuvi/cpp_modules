#include "AMateria.hpp"
#include <string>
#include <iostream>

AMateria::AMateria(void) : _type("N/A")
{
	//std::cout << "AMateria Default constructor called" << std::endl;
}

AMateria::AMateria(const std::string type) : _type(type)
{
	//std::cout << "AMateria Constructor called" << std::endl;
}

AMateria::AMateria(const AMateria& instance)
{
	//std::cout << "AMateria Copy constructor called" << std::endl;
	this->operator=(instance);
}

AMateria& AMateria::operator=(const AMateria& rhs)
{
	if (this != &rhs)
		{
			this->_type = rhs._type;
		}
	return *this;
}

AMateria::~AMateria(void) //
{
	//std::cout << "AMateria Destructor called " << this->getType() << std::endl;
}

const std::string& AMateria::getType(void) const {return _type;}

void AMateria::use(ICharacter& target)
{
	std::cout << "Use function from AMateria is called to: " << target.getName() << std::endl;
}


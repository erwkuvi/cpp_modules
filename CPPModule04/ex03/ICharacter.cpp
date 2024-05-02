#include "ICharacter.hpp"
#include <iostream>

ICharacter::ICharacter(const std::string& name) : _name(name) 
{
//	std::cout << "ICharacter Constructor called" << std::endl; 
}

ICharacter::ICharacter(void) {}

ICharacter::ICharacter(const ICharacter& instance) 
{
//	std::cout << "ICharacter Copy constructor called" << std::endl; 
	operator=(instance);
}

ICharacter& ICharacter::operator=(const ICharacter& rhs) 
{
//	std::cout << "ICharacter operator=" << std::endl; 
	this->_name = rhs._name;
	return *this;
}

ICharacter::~ICharacter(void) 
{
//	std::cout << "ICharacter Destructor called" << std::endl; 
}


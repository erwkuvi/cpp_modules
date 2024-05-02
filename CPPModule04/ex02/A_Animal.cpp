#include <iostream>
#include "A_Animal.hpp"

A_Animal::A_Animal(void) : _type("N/A")
{
	std::cout << "A_Animal Default Constructor called" << std::endl;
}

A_Animal::A_Animal(const std::string& type) : _type(type)
{
	std::cout << "A_Animal Default Constructor called" << std::endl;
}

A_Animal::A_Animal(const A_Animal& instance)
{
	std::cout << "A_Animal Copy Constructor called" << std::endl;
	operator=(instance); 
}

A_Animal& A_Animal::operator=(const A_Animal& rhs)
{
	if(this != &rhs)
	{
		_type = rhs._type; 
	}
	return *this;
}

A_Animal::~A_Animal(void)
{
	std::cout << "A_Animal Destructor called" << std::endl;
}

void A_Animal::makeSound(void) const
{
	std::cout << "A_Animal Sound ..." << std::endl;
}

std::string A_Animal::getType(void) const
{
	return _type;
}

Brain* A_Animal::getBrain() const
{
	return 0;
}

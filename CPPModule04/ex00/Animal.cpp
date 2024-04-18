#include <iostream>
#include "Animal.hpp"

Animal::Animal(void) : _type("N/A")
{
	std::cout << "Animal Default Constructor called" << std::endl;
}

Animal::Animal(const std::string& type) : _type(type)
{
	std::cout << "Animal Default Constructor called" << std::endl;
}

Animal::Animal(const Animal& instance)
{
	std::cout << "Animal Copy Constructor called" << std::endl;
	operator=(instance); 
}

Animal& Animal::operator=(const Animal& rhs)
{
	if(this != &rhs)
	{
		_type = rhs._type; 
	}
	return *this;
}

Animal::~Animal(void)
{
	std::cout << "Animal Destructor called" << std::endl;
}

void Animal::makeSound(void) const
{
	std::cout << "Animal Sound ..." << std::endl;
}

std::string Animal::getType(void) const
{
	return _type;
}

std::ostream& operator<<(std::ostream& output, const Animal& rhs)
{
	output << "Type: " << rhs.getType();
	return output;
}
	

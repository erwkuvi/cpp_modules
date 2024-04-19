#include <iostream>
#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) : _type("N/A")
{
	std::cout << "WrongAnimal Default Constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const std::string& type) : _type(type)
{
	std::cout << "WrongAnimal Default Constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& instance)
{
	std::cout << "WrongAnimal Copy Constructor called" << std::endl;
	operator=(instance); 
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& rhs)
{
	if(this != &rhs)
	{
		_type = rhs._type; 
	}
	return *this;
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "WrongAnimal Destructor called" << std::endl;
}

void WrongAnimal::makeSound(void) const
{
	std::cout << "WrongAnimal Sound ..." << std::endl;
}

std::string WrongAnimal::getType(void) const
{
	return _type;
}

std::ostream& operator<<(std::ostream& output, const WrongAnimal& rhs)
{
	output << "Type: " << rhs.getType();
	return output;
}
	

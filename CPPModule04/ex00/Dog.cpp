#include <iostream>
#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	std::cout << "Dog Default Constructor called" << std::endl;
}

//Dog::Dog(const std::string& type): Animal(type)
//{
//	std::cout << "Dog Constructor called" << std::endl;
//}

Dog::Dog(const Dog& instance) : Animal(instance)
{
	std::cout << "Dog Copy Constructor called" << std::endl;
}

Dog::~Dog(void)
{
	std::cout << "Dog Destructor called" << std::endl;	
}

Dog& Dog::operator= (const Dog& rhs)
{
	if(this != &rhs)
	{
		Animal::operator=(rhs);
	}
	return *this;
}

void Dog::makeSound() const
{
	std::cout << RED << "Woof... woof.. !!!" << RESET << std::endl;
}

std::ostream& operator<<(std::ostream& output, const Dog& rhs)
{
	output << "Type: " <<  rhs.getType(); 
	return output;
}

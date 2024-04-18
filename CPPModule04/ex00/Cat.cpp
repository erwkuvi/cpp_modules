#include <iostream>
#include "Cat.hpp"

Cat::Cat(void): Animal("Cat")
{
	std::cout << "Cat Constructor called" << std::endl;
}
//Cat::Cat(const std::string& type): Animal(type)
//{
//	std::cout << "Cat Constructor called" << std::endl;
//}

Cat::Cat(const Cat& instance) : Animal(instance)
{
	std::cout << "Cat Copy Constructor called" << std::endl;
}

Cat::~Cat(void)
{
	std::cout << "Cat Destructor called" << std::endl;	
}

Cat& Cat::operator=(const Cat& rhs)
{
	if(this != &rhs)
	{
		Animal::operator=(rhs);
	}
	return *this;
}

void Cat::makeSound() const
{
	std::cout << "Miao... miao.. miao... miao... !!!" << std::endl;
}

std::ostream& operator<<(std::ostream& output, const Cat& rhs)
{
	output << "Type: " <<  rhs.getType(); 
	return output;
}

#include <iostream>
#include "Cat.hpp"

Cat::Cat(void): A_Animal("Cat"), _brain(NULL)
{
	std::cout << "Cat Constructor called" << std::endl;
	_brain = new Brain();
}
//Cat::Cat(const std::string& type): A_Animal(type)
//{
//	std::cout << "Cat Constructor called" << std::endl;
//}

Cat::Cat(const Cat& instance) : A_Animal(instance)
{
	std::cout << "Cat Copy Constructor called" << std::endl;
	operator=(instance);
}

Cat::~Cat(void)
{
	if (_brain != NULL)
		delete _brain;
	std::cout << "Cat Destructor called" << std::endl;	
}

Cat& Cat::operator=(const Cat& rhs)
{
	if(this != &rhs)
	{
		A_Animal::operator=(rhs);
	if (_brain != NULL)
		delete _brain;
	_brain = new Brain(*rhs._brain);
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

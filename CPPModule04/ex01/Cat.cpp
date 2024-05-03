#include <iostream>
#include "Cat.hpp"

Cat::Cat(void): Animal("Cat"), _brain(NULL)
{
	std::cout << "Cat Constructor called" << std::endl;
	_brain = new Brain();
}

Cat::Cat(const Cat& instance) : Animal("Cat"), _brain(NULL)
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
		Animal::operator=(rhs);
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

Brain* Cat::getBrain() const
{
	if (_brain)
		return _brain;
	else
		return 0;
}

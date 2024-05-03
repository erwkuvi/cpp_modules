#include <iostream>
#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog(void): A_Animal("Dog") , _brain(NULL)
{
	std::cout << "Dog Default Constructor called" << std::endl;
	_brain = new Brain();
}

Dog::Dog(const Dog& instance) : A_Animal(instance)
{
	std::cout << "Dog Copy Constructor called" << std::endl;
	operator=(instance);
}

Dog::~Dog(void)
{
	if (_brain != NULL)
		delete _brain;
	std::cout << "Dog Destructor called" << std::endl;	
}

Dog& Dog::operator=(const Dog& rhs)
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

void Dog::makeSound() const
{
	std::cout << "Woof... woof.. !!!" << std::endl;
}

Brain* Dog::getBrain() const
{
	if (_brain != NULL)
	{
		return _brain;
	}
	else
		return 0;
}

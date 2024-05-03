#include <iostream>
#include "Monkey.hpp"
#include "Brain.hpp"

Monkey::Monkey(void): A_Animal("Monkey") , _brain(NULL)
{
	std::cout << "Monkey Default Constructor called" << std::endl;
	_brain = new Brain();
}

Monkey::Monkey(const Monkey& instance) : A_Animal(instance)
{
	std::cout << "Monkey Copy Constructor called" << std::endl;
	operator=(instance);
}

Monkey::~Monkey(void)
{
	if (_brain != NULL)
		delete _brain;
	std::cout << "Monkey Destructor called" << std::endl;	
}

Monkey& Monkey::operator=(const Monkey& rhs)
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

void Monkey::makeSound() const
{
	std::cout << "Woof... woof.. !!!" << std::endl;
}

Brain* Monkey::getBrain() const
{
	if (_brain != NULL)
	{
		return _brain;
	}
	else
		return 0;
}

std::ostream& operator<<(std::ostream& output, const Monkey& rhs)
{
	output << "Type: " <<  rhs.getType(); 
	return output;
}

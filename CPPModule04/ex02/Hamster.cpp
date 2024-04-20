#include <iostream>
#include "Hamster.hpp"
#include "Brain.hpp"

Hamster::Hamster(void): A_Animal("Hamster") , _brain(NULL)
{
	std::cout << "Hamster Default Constructor called" << std::endl;
	_brain = new Brain();
}

Hamster::Hamster(const Hamster& instance) : A_Animal(instance)
{
	std::cout << "Hamster Copy Constructor called" << std::endl;
	operator=(instance);
}

Hamster::~Hamster(void)
{
	if (_brain != NULL)
		delete _brain;
	std::cout << "Hamster Destructor called" << std::endl;	
}

Hamster& Hamster::operator=(const Hamster& rhs)
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

void Hamster::makeSound() const
{
	std::cout << "**Makes hamster sounds!!" << std::endl;
}

std::ostream& operator<<(std::ostream& output, const Hamster& rhs)
{
	output << "Type: " <<  rhs.getType(); 
	return output;
}

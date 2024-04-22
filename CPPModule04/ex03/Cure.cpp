#include "Cure.hpp"
#include <iostream>

Cure::Cure(void) : AMateria("cure")
{
	std::cout << "Cure Default constructor called" << std::endl; 
}

Cure::Cure(const Cure& instance) : AMateria(instance)
{
	std::cout << "Cure Copy constructor called" << std::endl; 
}

Cure& Cure::operator=(const Cure& rhs)
{
	if (this != &rhs)
		{
			AMateria::operator=(rhs);//implementation of the copying
		}
	return *this;
}

Cure::~Cure(void) //
{
	std::cout << "Cure Destructor called" << std::endl; 
}

	//Further members implementations ..
AMateria* Cure::clone(void)
{
	return new Cure(*this);
}

void Ice::use(ICharacter& target)
{
	std::cout << "[Cure] heals" << target.getName()<< "'s wounds" << std::endl; 
}

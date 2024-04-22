#include "Cure.hpp"
#include <string>
#include <iostream>

Cure::Cure(void) : AMateria("cure")
{
	std::cout << "Cure Default constructor called" << std::endl; 
}

Cure::Cure(const Cure& instance) : AMateria("cure")
{
	std::cout << "Cure Copy constructor called" << std::endl; 
	operator=(instance);
}

Cure& Cure::operator=(const Cure& rhs)
{
	if (this != &rhs)
		{
			//implementation of the copying
		}
	return *this;
}

Cure::~Cure(void) //
{
	std::cout << "Cure Destructor called" << std::endl; 
}

	//Further members implementations ..
		virtual AMateria* clone(const AMateria& instance);;//From AMateria.hpp
		virtual void use(ICharacter& target);;//From AMateria.hpp

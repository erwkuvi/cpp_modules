#include "ICharacter.hpp"
#include <string>
#include <iostream>

ICharacter::ICharacter(void) //: _init(some)
{
	std::cout << "ICharacter Default constructor called" << std::endl; 
}

// In case you need to pass an  argument
//ICharacter::ICharacter(const std::string& arg) //: _init(arg)
//{
//	std::cout << "ICharacter Constructor called" << std::endl; 
//}

ICharacter::ICharacter(const ICharacter& instance)
{
	std::cout << "ICharacter Copy constructor called" << std::endl; 
	operator=(instance);
}

ICharacter& ICharacter::operator=(const ICharacter& rhs)
{
	if (this != &rhs)
	{
		_name = rhs._name;

		for(int i = 0; i < 4; i++)
		{
			if (rhs._slots[i] != NULL)
				this->_slots[i] = new AMateria(*(rhs._slots[i]));
			else
				_slots[i] = NULL;
		}
	}
	return *this;
}

ICharacter::~ICharacter(void) //
{
	std::cout << "ICharacter Destructor called" << std::endl; 
}

	//Further members implementations ..

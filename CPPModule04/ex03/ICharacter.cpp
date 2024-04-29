#include "ICharacter.hpp"
#include <string>
#include <iostream>

ICharacter::ICharacter(const std::string& name) : _name(name), _slots{NULL, NULL, NULL, NULL}
{
	std::cout << "ICharacter Constructor called" << std::endl; 
}

ICharacter::ICharacter(void) : _name("N/A"), _slots{NULL, NULL, NULL, NULL} {}

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
		for (int i = 0; i < 4; i++)
		{
			delete _slots[i];
			_slots[i] = NULL;
		}
		for(int i = 0; i < 4; i++)
		{
			if (rhs._slots[i] != NULL)
				_slots[i] = rhs._slots[i]->clone();
		}
	}
	return *this;
}

ICharacter::~ICharacter(void) 
{
	std::cout << "ICharacter Destructor called" << std::endl; 
	for(int i = 0; i < 4; i++)
	{
		if (_slots[i] != NULL)
			delete _slots[i];
	}
}


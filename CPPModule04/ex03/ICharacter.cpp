#include "ICharacter.hpp"
#include <string>
#include <iostream>

ICharacter::ICharacter(const std::string& name) : _name(name), _slots{0, 0, 0, 0}
{
	std::cout << "ICharacter Constructor called" << std::endl; 
}

ICharacter::ICharacter(void) : _name("N/A"), _slots{0, 0, 0, 0} {}

ICharacter::ICharacter(const ICharacter& instance) : _slots{0, 0, 0, 0} 
{
	std::cout << "ICharacter Copy constructor called" << std::endl; 
	operator=(instance);
}

ICharacter& ICharacter::operator=(const ICharacter& rhs)
{
	std::cout << "ICharacter operator=" << std::endl; 
	if (this != &rhs)
	{
		_name = rhs._name; 
		for (int i = 0; i < 4; i++)
		{
			if (this->_slots[i] != NULL)
			{
				delete _slots[i];
				_slots[i] = NULL;
			}
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


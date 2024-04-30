#include "IMateriaSource.hpp"
#include <string>
#include <iostream>

IMateriaSource::IMateriaSource(void) : _materias{NULL, NULL, NULL, NULL}
{
	std::cout << "IMateriaSource Default constructor called" << std::endl; 
}

IMateriaSource::IMateriaSource(const IMateriaSource& instance) : _materias{NULL, NULL, NULL, NULL}
{
	std::cout << "IMateriaSource Copy constructor called" << std::endl; 
	if (this != &instance)
		{
			operator=(instance);//implementation of the copying
		}
}

IMateriaSource& IMateriaSource::operator=(const IMateriaSource& rhs)
{
	if (this != &rhs)
		{
			for(int i = 0; i < 4; i++)
			{
				if (_materias[i] != NULL)
				{
					delete _materias[i];
					this->_materias[i] = NULL;
				}
			}
			for(int i = 0; i < 4; i++)
				this->_materias[i] = rhs._materias[i]->clone();
		}
	return *this;
}

IMateriaSource::~IMateriaSource(void) //
{
	std::cout << "IMateriaSource Destructor called" << std::endl; 
	for(int i = 0; i < 4; i++)
	{
		if(_materias[i] != NULL)
			delete _materias[i];
	}
}


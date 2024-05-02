#include "IMateriaSource.hpp"
#include <iostream>

IMateriaSource::IMateriaSource(void)
{
//	std::cout << "IMateriaSource Default constructor called" << std::endl; 
}

IMateriaSource::IMateriaSource(const IMateriaSource& instance)
{
//	std::cout << "IMateriaSource Copy constructor called" << std::endl; 
	operator=(instance);
}

IMateriaSource& IMateriaSource::operator=(const IMateriaSource& rhs)
{
	(void)rhs;
	return *this;
}

IMateriaSource::~IMateriaSource(void) //
{
//	std::cout << "IMateriaSource Destructor called" << std::endl; 
}


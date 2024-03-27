#include "Fixed.hpp"
#include <iostream>


Fixed::Fixed(void) : _fixedPoint(0) 
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed (const Fixed& instance) //COPY CONSTRUCTOR
{
	std::cout << "Copy constructor called" << std::endl;
	operator=(instance);
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator= (const Fixed& rhs) //ASSIGNMENT OPERATOR
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &rhs)
		this->setRawBits(rhs.getRawBits());
	return *this;
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return this->_fixedPoint;
}

void Fixed::setRawBits (int const raw)
{
	this->_fixedPoint= raw;
}

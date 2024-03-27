#include "Fixed.hpp"
#include <iostream>
#include <ostream>

Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
}
 
Fixed::Fixed(const int n) : _fixedPoint(n) 
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const float n) : _fixedPoint(n)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed (const Fixed& instance) //COPY CONSTRUCTOR
{
	std::cout << "Copy constructor called" << std::endl;
	_fixedPoint = (instance._fixedPoint);
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator= (const Fixed& rhs) //ASSIGNMENT OPERATOR
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_fixedPoint = rhs.getRawBits();
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

float Fixed::toFloat(void) const
{
	float n = this->getRawBits();
	return n;
}

int Fixed::toInt(void) const
{
	int n = this->getRawBits();
	return n;
}

std::ostream



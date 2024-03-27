#include "Fixed.hpp"
#include <iostream>
#include <cmath>


Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
}
 
Fixed::Fixed(const int n) : _fixedPoint(n << _nFractBits) 
{
	std::cout << "Int constructor called" << std::endl;

}

Fixed::Fixed(const float n) : _fixedPoint(std::roundf(n * float(1 << _nFractBits)))
{
	std::cout << "Float constructor called" << std::endl;

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
		this->setRawBits(rhs._fixedPoint);
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
	float n = static_cast<float>(this->_fixedPoint / static_cast<float>(1 << _nFractBits));
	return n;
}

int Fixed::toInt(void) const
{
	int n = this->_fixedPoint >> _nFractBits;
	return n;
}

std::ostream& operator<< (std::ostream& output, const Fixed& other)
{
	output << other.toFloat();
	return output;
}


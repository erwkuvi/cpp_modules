#include "Fixed.hpp"
#include <iostream>
#include <cmath>

//CONSTRUCTORS
Fixed::Fixed(void) : _fixedPoint(0)
{
	//std::cout << "Default constructor called" << std::endl;
}
 
Fixed::Fixed(const int n) : _fixedPoint(n << _nFractBits) 
{
	//std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float n) : _fixedPoint(std::roundf(n * float(1 << _nFractBits)))
{
	//std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed (const Fixed& instance) //COPY CONSTRUCTOR
{
	//std::cout << "Copy constructor called" << std::endl;
	operator=(instance);
}

Fixed::~Fixed(void)
{
	//std::cout << "Destructor called" << std::endl;
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

//OUTPUT OPERATOR
std::ostream& operator<<(std::ostream& output, const Fixed& other)
{
	output << other.toFloat();
	return output;
}

Fixed& Fixed::operator=(const Fixed& rhs) //ASSIGNMENT OPERATOR
{
	//std::cout << "Copy assignment operator called" << std::endl;
	if (this != &rhs)
		this->setRawBits(rhs._fixedPoint);
	return *this;
}

//GETTERS AND SETTERS  
int Fixed::getRawBits(void) const
{
	//std::cout << "getRawBits member function called" << std::endl;
	return this->_fixedPoint;
}

void Fixed::setRawBits (int const raw)
{
	this->_fixedPoint= raw;
}

//ARITHMETIC OPERATORS 
Fixed Fixed::operator+(const Fixed &rhs) const
{
	float result = this->toFloat() + rhs.toFloat();
	return Fixed(result);
}

Fixed Fixed::operator-(const Fixed &rhs) const
{
	float result = this->toFloat() - rhs.toFloat();
	return Fixed(result);
}

Fixed Fixed::operator*(const Fixed &rhs) const
{
	float result = this->toFloat() * rhs.toFloat();
	return Fixed(result);
}

Fixed Fixed::operator/(const Fixed &rhs) const
{
	float result = this->toFloat() / rhs.toFloat();
	return Fixed(result);
}

//COMPARISON OPERATORS 
 bool	Fixed::operator>(const Fixed& rhs) const
{
	return _fixedPoint > rhs._fixedPoint;
}

bool	Fixed::operator<(const Fixed& rhs) const
{
	return !(*this > rhs);
}

bool Fixed::operator==(const Fixed &rhs) const
{
	return _fixedPoint == rhs._fixedPoint; 
}

bool Fixed::operator!=(const Fixed &rhs) const
{
	return !(*this == rhs); 
}

bool	Fixed::operator<=(const Fixed& rhs) const
{
	return *this < rhs || *this == rhs;
}

bool	Fixed::operator>=(const Fixed& rhs) const
{
	return *this > rhs || *this == rhs;
}

//INCREMENTAL OPERATORS 
Fixed& Fixed::operator++() //pre-incremental
{
	_fixedPoint++;
	return *this;
}

Fixed Fixed::operator++(int dummy) //post-incremental
{
	Fixed tmp = *this;
	++(*this);
	return tmp;
} 

//MIN & MAX MEMBER FUNCTIONS

Fixed& Fixed::min(Fixed &fixedp1, Fixed &fixedp2)
{
	if (fixedp1 >= fixedp2)
		return fixedp2; 
	return fixedp1;
}

Fixed& Fixed::max(Fixed &fixedp1, Fixed &fixedp2)
{
	if (fixedp1 >= fixedp2)
		return fixedp1; 
	return fixedp2;
}

const Fixed& Fixed::min(const Fixed &fixedp1, const Fixed &fixedp2)
{
	if (fixedp1 >= fixedp2)
		return fixedp2; 
	return fixedp1;
}

const Fixed& Fixed::max(const Fixed &fixedp1, const Fixed &fixedp2)
{
	if (fixedp1 >= fixedp2)
		return fixedp1; 
	return fixedp2;
}





//bottom part

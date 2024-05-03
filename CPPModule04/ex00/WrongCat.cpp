#include <iostream>
#include "WrongCat.hpp"

WrongCat::WrongCat(void): WrongAnimal("WrongCat")
{
	std::cout << "WrongCat Default Constructor called" << std::endl;
}

//WrongCat::WrongCat(const std::string& type): WrongAnimal(type)
//{
//	std::cout << "WrongCat Constructor called" << std::endl;
//}

WrongCat::WrongCat(const WrongCat& instance) : WrongAnimal(instance)
{
	std::cout << "WrongCat Copy Constructor called" << std::endl;
}

WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat Destructor called" << std::endl;	
}

WrongCat& WrongCat::operator=(const WrongCat& rhs)
{
	if(this != &rhs)
	{
		WrongAnimal::operator=(rhs);
	}
	return *this;
}

void WrongCat::makeSound() const
{
	std::cout << MAGENTA << "WrongCat sound Miao... miao... miao...!!" << RESET << std::endl;
}

std::ostream& operator<<(std::ostream& output, const WrongCat& rhs)
{
	output << "Type: " <<  rhs.getType(); 
	return output;
}

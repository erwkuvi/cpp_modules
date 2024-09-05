#include "PmergeMe.hpp"
#include <string>
#include <iostream>

PmergeMe::PmergeMe(void) //: _init(some)
{
	std::cout << "PmergeMe Default constructor called" << std::endl; 
}

// In case you need to pass an  argument
//PmergeMe::PmergeMe(const std::string& arg) //: _init(arg)
//{
//	std::cout << "PmergeMe Constructor called" << std::endl; 
//}

PmergeMe::PmergeMe(const PmergeMe& instance)
{
	std::cout << "PmergeMe Copy constructor called" << std::endl; 
	operator=(instance);
}

PmergeMe& PmergeMe::operator=(const PmergeMe& rhs)
{
	if (this != &rhs)
		{
			//implementation of the copying
		}
	return *this;
}

PmergeMe::~PmergeMe(void) //
{
	std::cout << "PmergeMe Destructor called" << std::endl; 
}

	//Further members implementations ..




	//output operator overload ..

std::ostream& operator<<(std::ostream& output, const PmergeMe& rhs)
{
	output << // implemetation <<;
	return output;
}


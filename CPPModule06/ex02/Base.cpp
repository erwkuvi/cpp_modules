#include "Base.hpp"
#include <string>
#include <ostream>

Base::Base(void) //: _init(some)
{
	std::cout << "Base Default constructor called" << std::endl; 
}

// In case you need to pass an  argument
//Base::Base(const std::string& arg) //: _init(arg)
//{
//	std::cout << "Base Constructor called" << std::endl; 
//}

Base::Base(const Base& instance)
{
	std::cout << "Base Copy constructor called" << std::endl; 
	operator=(instance);
}

Base& Base::operator=(const Base& rhs)
{
	if (this != &rhs)
		{
			//implementation of the copying
		}
	return *this;
}

Base::~Base(void) //
{
	std::cout << "Base Destructor called" << std::endl; 
}

	//Further members implementations ..




	//output operator overload ..

std::ostream& operator<<(std::ostream& output, const Base& rhs)
{
	output << // implemetation <<;
	return output;
}


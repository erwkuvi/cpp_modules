#include "Data.hpp"
#include <string>
//#include <ostream>

Data::Data(void) //: _init(some)
{
	std::cout << "Data Default constructor called" << std::endl; 
}

// In case you need to pass an  argument
//Data::Data(const std::string& arg) //: _init(arg)
//{
//	std::cout << "Data Constructor called" << std::endl; 
//}

Data::Data(const Data& instance)
{
	std::cout << "Data Copy constructor called" << std::endl; 
	operator=(instance);
}

Data& Data::operator=(const Data& rhs)
{
	if (this != &rhs)
		{
			//implementation of the copying
		}
	return *this;
}

Data::~Data(void) //
{
	std::cout << "Data Destructor called" << std::endl; 
}

	//Further members implementations ..




	//output operator overload ..

std::ostream& operator<<(std::ostream& output, const Data& rhs)
{
	output << // implemetation <<;
	return output;
}


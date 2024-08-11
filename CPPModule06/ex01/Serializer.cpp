#include "Serializer.hpp"
#include <string>
//#include <ostream>

Serializer::Serializer(void) //: _init(some)
{
	std::cout << "Serializer Default constructor called" << std::endl; 
}

// In case you need to pass an  argument
//Serializer::Serializer(const std::string& arg) //: _init(arg)
//{
//	std::cout << "Serializer Constructor called" << std::endl; 
//}

Serializer::Serializer(const Serializer& instance)
{
	std::cout << "Serializer Copy constructor called" << std::endl; 
	operator=(instance);
}

Serializer& Serializer::operator=(const Serializer& rhs)
{
	if (this != &rhs)
		{
			//implementation of the copying
		}
	return *this;
}

Serializer::~Serializer(void) //
{
	std::cout << "Serializer Destructor called" << std::endl; 
}

	//Further members implementations ..


uintptr_t Serializer::serialize(Data* ptr)
{
	return static_cast<uintptr_t>(ptr);
}

Data* Serializer::deserialize(uintptr_t raw)
{

}


	//output operator overload ..

std::ostream& operator<<(std::ostream& output, const Serializer& rhs)
{
	output << // implemetation <<;
	return output;
}


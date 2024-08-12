#include "Serializer.hpp"
#include <string>
#include <iostream>

Serializer::Serializer(void) //: _init(some)
{
	std::cout << "Serializer Default constructor called" << std::endl; 
}


Serializer::Serializer(const Serializer& instance)
{
	std::cout << "Serializer Copy constructor called" << std::endl; 
	operator=(instance);
}

Serializer& Serializer::operator=(const Serializer& rhs)
{
	if (this != &rhs){}
	return *this;
}

Serializer::~Serializer(void) //
{
	std::cout << "Serializer Destructor called" << std::endl; 
}

	//Further members implementations ..


uintptr_t Serializer::serialize(Data* ptr)
{
	if(ptr)
	{
		return reinterpret_cast<uintptr_t>(ptr);
	}
	std::cerr << "Error: no valid pointer" << std::endl;
	return 0;
}

Data* Serializer::deserialize(uintptr_t raw)
{
	if (raw == 0)
	{
		std::cerr << "Error: no valid raw argument" << std::endl;
		return NULL;
	}
	return reinterpret_cast<Data*>(raw);
}


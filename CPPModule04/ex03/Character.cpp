#include "Character.hpp"
#include <string>
//#include <ostream>

Character::Character(void) //: _init(some)
{
	std::cout << "Character Default constructor called" << std::endl; 
}

// In case you need to pass an  argument
//Character::Character(const std::string& arg) //: _init(arg)
//{
//	std::cout << "Character Constructor called" << std::endl; 
//}

Character::Character(const Character& instance)
{
	std::cout << "Character Copy constructor called" << std::endl; 
	operator=(instance);
}

Character& Character::operator=(const Character& rhs)
{
	if (this != &rhs)
		{
			//implementation of the copying
		}
	return *this;
}

Character::~Character(void) //
{
	std::cout << "Character Destructor called" << std::endl; 
}

	//Further members implementations ..




	//output operator overload ..

std::ostream& operator<<(std::ostream& output, const Character& rhs)
{
	output << // implemetation <<;
	return output;
}


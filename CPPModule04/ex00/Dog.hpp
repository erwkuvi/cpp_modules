#ifndef DOG_HPP
#define DOG_HPP
#include <string>
#include "Animal.hpp"

class Dog : public Animal
{
protected:
	std::string type;

public:
	Dog(void);
	Dog(const Dog& instance);
	Dog& operator=(const Dog& rhs);
	~Dog(void);
};

#endif // !DOG_HPP

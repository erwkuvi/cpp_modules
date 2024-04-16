#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <string>

class Animal
{
protected:
	std::string type;

public:
	Animal(void);
	Animal(const Animal& instance);
	Animal& operator=(const Animal& rhs);
	~Animal(void);
	void makeSound();
};

#endif // !ANIMAL_HPP

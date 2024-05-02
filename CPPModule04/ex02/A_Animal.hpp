#ifndef A_ANIMAL_HPP
#define A_ANIMAL_HPP
#include <string>
#include "Brain.hpp"

class A_Animal
{
private:

protected:
	std::string _type;

public:
	A_Animal(void);
	A_Animal(const std::string& type);
	A_Animal(const A_Animal& instance);
	A_Animal& operator=(const A_Animal& rhs);
	virtual ~A_Animal(void);
	virtual void makeSound()const = 0;
	//GETTER
	std::string getType(void) const;
	virtual Brain* getBrain() const;
};

#endif // !A_ANIMAL_HPP

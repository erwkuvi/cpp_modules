#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <string>

class Animal
{
private:

protected:
	std::string _type;

public:
	Animal(void);
	Animal(const std::string& type);
	Animal(const Animal& instance);
	Animal& operator=(const Animal& rhs);
	virtual ~Animal(void);
	virtual void makeSound()const;
	//GETTER
	std::string getType(void) const;
};
std::ostream& operator<<(std::ostream& output, const Animal& rhs);

#endif // !ANIMAL_HPP

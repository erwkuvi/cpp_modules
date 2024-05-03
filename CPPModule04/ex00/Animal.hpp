#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <string>
#define RESET	"\033[0m"
#define YELLOW	"\033[33m"
#define GREEN "\033[32m"
#define BLUE    "\033[34m"
#define MAGENTA "\033[35m"
#define RED     "\033[31m"

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

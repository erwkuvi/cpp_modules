#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP
#include <string>
#define RESET	"\033[0m"
#define YELLOW	"\033[33m"
#define GREEN "\033[32m"
#define BLUE    "\033[34m"
#define MAGENTA "\033[35m"
#define RED     "\033[31m"

class WrongAnimal
{
private:

protected:
	std::string _type;

public:
	WrongAnimal(void);
	WrongAnimal(const std::string& type);
	WrongAnimal(const WrongAnimal& instance);
	WrongAnimal& operator=(const WrongAnimal& rhs);
	virtual ~WrongAnimal(void);
	void makeSound()const;
	//GETTER
	std::string getType(void) const;
};
std::ostream& operator<<(std::ostream& output, const WrongAnimal& rhs);

#endif // !WRONGANIMAL_HPP

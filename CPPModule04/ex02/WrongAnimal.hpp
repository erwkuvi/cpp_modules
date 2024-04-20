#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP
#include <string>

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

#ifndef DOG_HPP
#define DOG_HPP
#include "Animal.hpp"

class Dog : public Animal
{
	
	public:
		Dog(void);
		//Dog(const std::string& type);
		Dog(const Dog& instance);
		Dog& operator=(const Dog& rhs);
		~Dog(void);
		void makeSound() const;
};
std::ostream& operator<<(std::ostream& output, const Dog& rhs);

#endif // !DOG_HPP

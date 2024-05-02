#ifndef DOG_HPP
#define DOG_HPP
#include "Brain.hpp"
#include "Animal.hpp"

class Dog : public Animal
{
	Brain* _brain;
	
	public:
		Dog(void);
		//Dog(const std::string& type);
		Dog(const Dog& instance);
		Dog& operator=(const Dog& rhs);
		~Dog(void);
		void makeSound() const;

		virtual Brain* getBrain() const;
};

#endif // !DOG_HPP

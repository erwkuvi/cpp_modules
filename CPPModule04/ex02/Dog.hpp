#ifndef DOG_HPP
#define DOG_HPP
#include "Brain.hpp"
#include "A_Animal.hpp"

class Dog : public A_Animal
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

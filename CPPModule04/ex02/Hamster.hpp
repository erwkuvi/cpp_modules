#ifndef HAMSTER_HPP
#define HAMSTER_HPP
#include "Brain.hpp"
#include "A_Animal.hpp"

class Hamster : public A_Animal
{
	Brain* _brain;
	
	public:
		Hamster(void);
		//Hamster(const std::string& type);
		Hamster(const Hamster& instance);
		Hamster& operator=(const Hamster& rhs);
		~Hamster(void);
		virtual void makeSound() const;
};

#endif // !HAMSTER_HPP

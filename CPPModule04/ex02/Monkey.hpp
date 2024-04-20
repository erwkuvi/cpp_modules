#ifndef MONKEY_HPP
#define MONKEY_HPP
#include "Brain.hpp"
#include "A_Animal.hpp"

class Monkey : public A_Animal
{
	Brain* _brain;
	
	public:
		Monkey(void);
		//Monkey(const std::string& type);
		Monkey(const Monkey& instance);
		Monkey& operator=(const Monkey& rhs);
		~Monkey(void);
		virtual void makeSound() const;
};

#endif // !MONKEY_HPP

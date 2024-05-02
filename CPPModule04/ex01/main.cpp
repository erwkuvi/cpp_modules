#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include <iostream>
#define RESET	"\033[0m"
#define YELLOW	"\033[33m"
#define GREEN "\033[32m"
#define BLUE    "\033[34m"
#define MAGENTA "\033[35m"
#define RED     "\033[31m"

int main()
{
	Brain test;
	Animal* animal[6];

	for(int i = 0; i < 6; ++i)
	{
		if (i % 2 == 0)
		{
			animal[i] = new Dog();
		}
		else
		{
			animal[i] = new Cat();
		}
		std::cout << GREEN << "new Animal " << animal[i]->getType() << RESET << std::endl;
	}
	animal[0]->getBrain()->setIdea(55, "Testing");
	animal[0]->getBrain()->setIdea(9, "Lets have a loooooong idea");
	std::cout << YELLOW << "animal[0] " << RESET << std::endl;
	animal[0]->getBrain()->printIdeas();
	Animal* me = new Dog(); 
	me = animal[0];
	std::cout << YELLOW << "me " << RESET << std::endl;
	me->getBrain()->printIdeas();
	for(int i = 0; i < 6; ++i)
		delete animal[i];
//	const Animal* j = new Dog();
//	const Animal* i = new Cat();
//	delete j;//should not create a leak
//	delete i;
	return 0;
}

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

//int main()
//{
//	Animal* ptr = new Dog();
//	Animal *r = new Animal(*ptr);
//	
//	delete ptr;
//	delete r;
//
//	return 0;
//}
int main()
{
	//Brain test;
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
	// cast the animal object to a Dog pointer in order to access Brain functions, which doesn't have the Animal Class
	Dog* dogPtr = dynamic_cast<Dog*>(animal[0]);
	dogPtr->getBrain()->setIdea(55, "Testing");//set index, idea01
	dogPtr->getBrain()->setIdea(9, "Lets have a loooooong idea");//set index, idea2
	std::cout << YELLOW << "animal[0]: " << animal[0]->getType() << RESET << std::endl;
	dogPtr->getBrain()->printIdeas();
	//Creating a new Animal object to copy to
	Animal* me = new Dog(); 
	Dog* dogPtr2 = dynamic_cast<Dog*>(me);//type casting to a dog pointer
	std::cout << YELLOW << "me: " << me->getType() << RESET << std::endl;
	dogPtr2->getBrain()->printIdeas();
	*dogPtr2 = *dogPtr; // Copying data from animal[0] to me
	dogPtr2->getBrain()->setIdea(2, "Idea from the 'me' object");
	dogPtr2->getBrain()->printIdeas();
	for(int i = 0; i < 6; ++i)
		delete animal[i];
	delete me;
//	const Animal* j = new Dog();
//	const Animal* i = new Cat();
//	delete j;//should not create a leak
//	delete i;
	return 0;
}

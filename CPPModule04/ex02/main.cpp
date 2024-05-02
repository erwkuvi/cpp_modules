#include "A_Animal.hpp"
#include "Monkey.hpp"
#include "Hamster.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>

//int main ()
//{
//	Dog dog;
//	dog.makeSound();
//	return 0;
//}
int main()
{
	A_Animal *farm[4] =
	{
		new Dog(),
		new Monkey(),
		new Hamster(),
		new Cat(),
	};
	std::cout << "\n" << std::endl;
	for(int i = 0; i < 4; i++)
	{

		std::cout << "Type: " << farm[i]->getType() << " -> ";
	 farm[i]->makeSound();
	}
	std::cout << "\n" << std::endl;

	for(int i = 0; i < 4; i++)
	{
		delete farm[i]; 
	}
	//A_Animal instance;
	

	return 0;
}

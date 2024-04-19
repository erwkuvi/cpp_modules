#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include <iostream>

int main()
{
	Animal* animal[20];

	for(int i = 0; i < 6; ++i)
	{
		if (i % 2 == 0)
		{
			animal[i] = new Dog();
			std::cout << "\n" << std::endl;
		}
		else
		{
			animal[i] = new Cat();
			std::cout << "\n" << std::endl;
		}
	}
	for(int i = 0; i < 6; ++i)
		delete animal[i];
//	const Animal* j = new Dog();
//	const Animal* i = new Cat();
//	delete j;//should not create a leak
//	delete i;
	return 0;
}

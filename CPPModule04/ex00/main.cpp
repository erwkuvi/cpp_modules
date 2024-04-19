#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include <iostream>

int main()
{
	Dog mydog;
	Dog a;
	
	a = mydog;
	const Animal* meta = new Animal();
	const Animal* j = new Cat();
	const Animal* k = new Dog();
	const WrongAnimal* i = new WrongCat();
	std::cout << "\n" << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << k->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	k->makeSound();
	meta->makeSound();
	std::cout << "\n" << std::endl;
	delete meta;
	delete i;
	delete j;
	delete k;
//	...
		return 0;
}

//int main()
//{
//	const Animal* meta = new Animal();
//	const Animal* j = new Dog();
//	const WrongAnimal* i = new WrongCat();
//	std::cout << j->getTypeh() << " " << std::endl;
//	std::cout << i->getType() << " " << std::endl;
//	i->makeSound(); //will output the cat sound!
//	j->makeSound();
//	meta->makeSound();
//	delete meta;
//	delete i;
//	delete j;
////	...
//		return 0;
//}

//int main()
//{
//const Animal* meta = new Animal();
//const Animal* j = new Dog();
//const Animal* i = new Cat();
//std::cout << j->getType() << " " << std::endl;
//std::cout << i->getType() << " " << std::endl;
//i->makeSound(); //will output the cat sound!
//j->makeSound();
//meta->makeSound();
//return 0;
//}

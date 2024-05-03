#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include <iostream>

int main()
{
	Dog mydog;
	Dog a(mydog);
	
	//a = mydog;
	const Animal* meta = new Animal();
	const Animal* c = new Cat();
	const Animal* d = new Dog();
	const WrongAnimal* w = new WrongCat();
	std::cout << "\n" << std::endl;
	std::cout << GREEN << "Cat: " << c->getType() << RESET << std::endl;
	std::cout << MAGENTA << "WrongCat: " << w->getType() << RESET << std::endl;
	std::cout << RED << "Dog: " << d->getType() << RESET << std::endl;
	std::cout << MAGENTA << "WrongCat: ";
	w->makeSound(); //will output the cat sound!
	std::cout << GREEN << "Cat: ";
	c->makeSound();
	std::cout << RED << "Dog: ";
	d->makeSound();
	std::cout << BLUE << "Meta: ";
	meta->makeSound();
	std::cout << "\n" << std::endl;
	delete meta;
	delete c;
	delete d;
	delete w;
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

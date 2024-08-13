#include "Base.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <exception>
#include "Derived.hpp"

Base::Base(void) {}
Base::~Base(void) {}

Base* Base::generate(void)
{
	Base* ptr[3];
	ptr[0] = new A();
	ptr[1] = new B();
	ptr[2] = new C();
		std::srand(static_cast<unsigned int>(std::time(NULL)));
		int randVal = std::rand() % 100 + 1;
		//std::cout << "Random Value on [0, " << RAND_MAX << "]: " << randVal << std::endl;
		int idx = randVal % 3;
		for(int j = 0; j < 3; j++)
		{
			if (j != idx)
				delete ptr[j];
		}
		return ptr[idx];
}

void Base::identify(Base* p)
{
	std::cout << RED << "\nPointer:\t" << RESET; 
	if(dynamic_cast<A*>(p))
		std::cout << "Object is type: A" << std::endl; 
	if(dynamic_cast<B*>(p))
		std::cout << "Object is type: B" << std::endl; 
	if(dynamic_cast<C*>(p))
		std::cout << "Object is type: C" << std::endl; 
}

void Base::identify(Base& p)
{
	std::cout << YELLOW << "\nReference:\t" << RESET; 
	//Base* check = &p;
	try
	{
		A& a = dynamic_cast<A&>(p);
		identify(&a);
	}
	catch(const std::exception& e) {
		//std::cout << "(A) Error: " << e.what() << std::endl;
	}
	try
	{
		B& b = dynamic_cast<B&>(p);
		identify(&b);

	}
	catch (const std::exception& e) {
		//std::cout << "(B) Error: " << e.what() << std::endl;
	}
	try
	{
		C& c = dynamic_cast<C&>(p);
		identify(&c);
	}
	catch (const std::exception& e) {
		//std::cout << "(C) Error: " << e.what() << std::endl;
	}

}

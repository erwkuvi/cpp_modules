#include "Base.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base::Base(void) //: _init(some)
{
	//std::cout << "Base Default constructor called" << std::endl; 
}
Base::~Base(void) //
{
	//std::cout << "Base Destructor called" << std::endl; 
}


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
	std::cout << "This one *p" << std::endl; 
	if(dynamic_cast<A*>(p))
		std::cout << "Object is type: A" << std::endl; 
	if(dynamic_cast<B*>(p))
		std::cout << "Object is type: B" << std::endl; 
	if(dynamic_cast<C*>(p))
		std::cout << "Object is type: C" << std::endl; 
}

void Base::identify(Base& p)
{
	std::cout << "This one &p" << std::endl; 
	//Base* check = &p;
	A a = static_cast<A>(p);

}

#include "Base.hpp"
#include <iostream>
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"


int main (void)
{
	A a;
	B b;
	C c;

	Base* p = &c;
	p->identify(p);
	p->identify(*(&a));
	p->identify(*p);
	//Base* p = &a;
	//B* b1 = dynamic_cast<B*>(p);
	//if (b1)
	//	std::cout << "success" << std::endl;
	//else
	//	std::cout << "failure" << std::endl;
	//A* a1 = dynamic_cast<A*>(p);
	//if (a1)
	//	std::cout << "success" << std::endl;
	//else
	//	std::cout << "failure" << std::endl;
	
}

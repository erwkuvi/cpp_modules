#include "MutantStack.hpp"
#include <iostream>
#include <vector>

int main(void)
{
	std::cout << "Mutant Stack" << std::endl;
	MutantStack<int> test;
	test.push(1);
	test.push(16);

	std::cout << "top: " << test.top() << std::endl;
	test.pop();
	std::cout << "test size: " << test.size() << std::endl;
	test.push(12);
	test.push(216);

	MutantStack<int>::iterator it = test.begin();
	MutantStack<int>::iterator ite = test.end();

	//test.test();
	while(it != ite)
	{
		std::cout << "*it: " << *it << std::endl;
		++it;
	}
	std::cout << "\n" << std::endl;

	MutantStack<int> b;
	b.push(9);
	b.push(916);

	MutantStack<int> a(test);
	MutantStack<int>::iterator ita = a.begin();
	MutantStack<int>::iterator itea = a.end();

	//test.test();
	while(ita != itea)
	{
		std::cout << "*ita: " << *ita << std::endl;
		++ita;
	}
	std::cout << "there" << std::endl;

	a = b;
	ita = a.begin();
	itea = a.end();
	std::cout << "\n" << std::endl;
	while(ita != itea)
	{
		std::cout << "*itb: " << *ita << std::endl;
		++ita;
	}
	std::cout << "end" << std::endl;

}

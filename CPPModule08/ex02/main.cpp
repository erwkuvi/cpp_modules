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


	std::cout << "\nRegular Container" << std::endl;
	std::vector<int> test1;
	test1.push_back(1);
	test1.push_back(16);

	std::cout << "idx: " << test1[1] << std::endl;
	std::cout << "top: " << test1.back() << std::endl;
	test1.pop_back();
	std::cout << "test1 size: " << test1.size() << std::endl;
	test1.push_back(12);
	test1.push_back(216);

	std::vector<int>::iterator it1 = test1.begin();
	std::vector<int>::iterator ite1 = test1.end();

	//test1.test1();
	while(it1 != ite1)
	{
		std::cout << "*it1: " << *it1 << std::endl;
		++it1;
	}
	std::cout << "\n" << std::endl;

	std::vector<int> b1;
	b1.push_back(9);
	b1.push_back(916);

	std::vector<int> a1(test1);
	std::vector<int>::iterator ita1 = a1.begin();
	std::vector<int>::iterator itea1 = a1.end();

	//test1.test1();
	while(ita1 != itea1)
	{
		std::cout << "*ita: " << *ita1 << std::endl;
		++ita1;
	}
	std::cout << "there" << std::endl;

	a1 = b1;
	ita1 = a1.begin();
	itea1 = a1.end();
	std::cout << "\n" << std::endl;
	while(ita1 != itea1)
	{
		std::cout << "*itb1: " << *ita1 << std::endl;
		++ita1;
	}
	std::cout << "end" << std::endl;

}

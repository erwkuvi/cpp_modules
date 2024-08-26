#include <iostream>
#include "Span.hpp"
#include <ctime>

//void printVector(const std::vector<size_t> list)
//{
//	std::vector<size_t>::const_iterator it;
//
//	for (it = list.begin(); it != list.end(); it++)
//	{
//		std::cout << "List: " << *it << std::endl;
//	}
//}

int main (void)
{
	try
	{
		Span a = Span(9);
		std::vector<size_t> myints = {42, 22};

		a.addNumber(6);
		a.addNumber(3);
		//a.addNumber(17);
		//a.addNumber(9);
		//a.addNumber(110);


		std::cout << a.shortestSpan() << std::endl;
		std::cout << a.longestSpan() << std::endl;
		std::cout << a << std::endl;
		a.fillSpan(myints.begin(), myints.end());
		std::cout << a << std::endl;
	}
	catch(std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

}

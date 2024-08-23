#include <iostream>
#include "Span.hpp"
#include <ctime>

int main (void)
{
	try
	{
		std::srand(static_cast<unsigned int>(std::time(NULL)));
		int randVal = std::rand() % 1000;
		std::cout << randVal << std::endl;
		//Span a = Span(5);

		//a.addNumber(6);
		//a.addNumber(3);
		//a.addNumber(17);
		//a.addNumber(9);
		//a.addNumber(11);

		//std::cout << a.shortestSpan() << std::endl;
		//std::cout << a.longestSpan() << std::endl;
	}
	catch(std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

}

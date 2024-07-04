#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"

int main(void)
{
	try 
	{

		//Bureaucrat guu;
		Bureaucrat guy("This Guy", 3);
		//Bureaucrat test("That Guy", 0);
		std::cout << guy << std::endl;
		//std::cout << test << std::endl;
		Bureaucrat testo("Testo", 150);
		//Bureaucrat testi("Testi", 0);
		std::cout << testo << std::endl;
		testo.decrementGrade();
		//std::cout << testi << std::endl;
	} 
	catch (std::exception& e) 
	{
		std::cout << "Exception caught: " << e.what() << std::endl;
	}
}

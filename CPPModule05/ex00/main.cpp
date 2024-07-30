#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"

int main(void)
{
	try 
	{

		//Bureaucrat guu;
		Bureaucrat guy("This Guy", 3);
		Bureaucrat dude(guy);
		//Bureaucrat test("That Guy", 0);
		std::cout << guy << std::endl;
		std::cout << dude << std::endl;
		//std::cout << test << std::endl;
		Bureaucrat testGuy("TestGuy", 150);
		//Bureaucrat testi("Testi", 0);
		std::cout << testGuy << std::endl;
		//guy.decrementGrade();
		//std::cout << guy << std::endl;
		testGuy = guy;
		std::cout << testGuy << std::endl;
		//guy.incrementGrade();
		//std::cout << guy << std::endl;
		//guy.incrementGrade();
		//std::cout << guy << std::endl;
		//guy.incrementGrade();
		//std::cout << guy << std::endl;
		//guy.incrementGrade();
		//std::cout << guy << std::endl;
		//guy.incrementGrade();
		//std::cout << guy << std::endl;
		//guy.incrementGrade();
		//std::cout << guy << std::endl;

	} 
	catch (std::exception& e) 
	{
		std::cout << "Exception caught: " << e.what() << std::endl;
	}
}

#include "Bureaucrat.hpp"
#include <cstdlib>
#include <ctime>
#include <exception>
#include "AForm.hpp"
#include "Intern.hpp"


int main(void)
{
	Intern someRandomIntern;
	AForm* rrf;
	AForm* ptr2 = new RobotomyRequestForm("Girl");
	AForm* ptr3 = new ShrubberyCreationForm("Balcony");
	try 
	{
		Bureaucrat guy("This Guy", 5);
		rrf = someRandomIntern.makeForm("preSideNtiaL pardon", "Bender");
		Bureaucrat b("The Dude", 32);
		std::cout << someRandomIntern << std::endl;
		if (!rrf)
		{
			std::string reason("No Form to execute.");
			throw (reason);
		}
		rrf->beSigned(guy);
		guy.executeForm(*rrf);
		b.executeForm(*ptr2);
		ptr3->beSigned(b);
		b.executeForm(*ptr3);
	} 
	catch (std::exception& e) 
	{
		std::cout << YELLOW << "Exception caught: " << e.what() << RESET << std::endl;
	}
}

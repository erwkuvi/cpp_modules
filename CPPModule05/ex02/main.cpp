#include "Bureaucrat.hpp"
#include <cstdlib>
#include <ctime>
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"


int main(void)
{
	AForm* ptr = new PresidentialPardonForm("Dude");
	AForm* ptr2 = new RobotomyRequestForm("Girl");
	ptr = ptr2;
	try 
	{
		Bureaucrat guy("This Guy", 2);
		ptr->beSigned(guy);
		guy.executeForm(*ptr);
	} 
	catch (std::exception& e) 
	{
		std::cout << "Exception caught: " << e.what() << std::endl;
	}
}

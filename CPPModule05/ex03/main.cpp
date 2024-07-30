#include "Bureaucrat.hpp"
#include <cstdlib>
#include <ctime>
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"


int main(void)
{
	AForm* ptr = new PresidentialPardonForm("Pepe");
	AForm* ptr2 = new RobotomyRequestForm("Girl");
	AForm* ptr3 = new ShrubberyCreationForm("Balcony");
	//ptr = ptr2;
	try 
	{
		Bureaucrat guy("This Guy", 15);
		Bureaucrat b("The Dude", 32);
		ptr->beSigned(guy);
		guy.executeForm(*ptr);
		b.executeForm(*ptr2);
		ptr3->beSigned(b);
		b.executeForm(*ptr3);
	} 
	catch (std::exception& e) 
	{
		std::cout << "Exception caught: " << e.what() << std::endl;
	}
}

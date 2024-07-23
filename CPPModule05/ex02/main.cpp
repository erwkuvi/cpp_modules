#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

int main(void)
{
	try 
	{
		PresidentialPardonForm form("Form01");
		Bureaucrat guy("This Guy", 20);
		guy.signForm(form);
	} 
	catch (std::exception& e) 
	{
		std::cout << "Exception caught: " << e.what() << std::endl;
	}
	try 
	{
		PresidentialPardonForm form("Form02");
		Bureaucrat guy("This Guy", 30);
		guy.signForm(form);
	} 
	catch (std::exception& e) 
	{
		std::cout << "Exception caught: " << e.what() << std::endl;
	}
	try 
	{
		PresidentialPardonForm form("Form02");
		Bureaucrat guy("This Guy", 30);
		guy.signForm(form);
	} 
	catch (std::exception& e) 
	{
		std::cout << "Exception caught: " << e.what() << std::endl;
	}
}

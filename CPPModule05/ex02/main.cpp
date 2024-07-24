#include "Bureaucrat.hpp"
#include <cstdlib>
#include <ctime>
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

int main(void)
{
	
	std::srand(std::time(NULL));
	int randVal = std::rand() % 100 + 1;
	std::cout << "Random Value on [0, " << RAND_MAX << "]: " << randVal << std::endl;
//	try 
//	{
//		PresidentialPardonForm form("Form01");
//		Bureaucrat guy("This Guy", 20);
//		guy.signForm(form);
//	} 
//	catch (std::exception& e) 
//	{
//		std::cout << "Exception caught: " << e.what() << std::endl;
//	}
//	try 
//	{
//		PresidentialPardonForm form("Form02");
//		Bureaucrat guy("This Guy", 30);
//		guy.signForm(form);
//	} 
//	catch (std::exception& e) 
//	{
//		std::cout << "Exception caught: " << e.what() << std::endl;
//	}
//	try 
//	{
//		PresidentialPardonForm form("Form02");
//		Bureaucrat guy("This Guy", 30);
//		guy.signForm(form);
//	} 
//	catch (std::exception& e) 
//	{
//		std::cout << "Exception caught: " << e.what() << std::endl;
//	}
}

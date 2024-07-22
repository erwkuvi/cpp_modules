#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
	try 
	{
		Form form("Form01", 100, 50);
		Bureaucrat guy("This Guy", 20);
		guy.signForm(form);
	} 
	catch (std::exception& e) 
	{
		std::cout << "Exception caught: " << e.what() << std::endl;
	}
	try 
	{
		Form form("Form02", 20, 10);
		Bureaucrat guy("This Guy", 30);
		guy.signForm(form);
	} 
	catch (std::exception& e) 
	{
		std::cout << "Exception caught: " << e.what() << std::endl;
	}
	try 
	{
		Form form("Form02", 220, 10);
		Bureaucrat guy("This Guy", 30);
		guy.signForm(form);
	} 
	catch (std::exception& e) 
	{
		std::cout << "Exception caught: " << e.what() << std::endl;
	}
}

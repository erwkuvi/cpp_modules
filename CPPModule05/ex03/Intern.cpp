#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include <cstddef>
#include <string>
//#include <ostream>

Intern::Intern(void) //: _init(some)
{
	std::cout << "Intern Default constructor called" << std::endl; 
}

// In case you need to pass an  argument
//Intern::Intern(const std::string& arg) //: _init(arg)
//{
//	std::cout << "Intern Constructor called" << std::endl; 
//}

Intern::Intern(const Intern& instance)
{
	std::cout << "Intern Copy constructor called" << std::endl; 
	operator=(instance);
}

Intern& Intern::operator=(const Intern& rhs)
{
	if (this != &rhs)
		{
			//implementation of the copying
		}
	return *this;
}

Intern::~Intern(void) {}

AForm* Intern::makeForm(const std::string& formName, const std::string& formTarget)
{
	AForm* ptr[3];
	ptr[0] = new ShrubberyCreationForm(formTarget);
	ptr[1] = new RobotomyRequestForm(formTarget);
	ptr[2] = new PresidentialPardonForm(formTarget);
	int i;
	for (i = 0; i < 3; i++)
	{
		if(formName == names[i])
			break;
		if (i == 3)
		{
			std::cerr << "Error" << std::endl;//REturn an error message
			return NULL;
		}
	}
	return ptr[i];
}


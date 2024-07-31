#include "Intern.hpp"
#include <cstddef>
#include <string>
//#include <ostream>

Intern::Intern(void) {}

Intern::Intern(const Intern& instance)
{
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
	int i = 0;
	std::string formCmp = lowercasify(formName);
	while (formCmp != publicForms[i] && i < 3)
		i++;
	for(int j = 0; j < 3; j++)
	{
		if (j != i)
			delete ptr[j];
	}
	if (i == 3)
		throw (AForm::InvalidForm());
	std::cout << "Intern creates a " << formCmp << " form" << std::endl;  
	return ptr[i];
}

std::string lowercasify(const std::string& str)
{
	std::string result(str);
	for (size_t i = 0; i < str.length(); ++i) 
		result[i] = tolower(str[i]); 
	return result;
}

std::ostream& operator<<(std::ostream& output, const Intern& instance)
{
	(void)instance;
	output << RED << "This intern is here just to work for free\n" << RESET;

	return output;
}

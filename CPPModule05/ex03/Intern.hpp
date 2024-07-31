#ifndef INTERN_HPP
#define INTERN_HPP
#include <string>
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern 
{
private:

public:
    Intern(void);
    Intern(const Intern& instance);
    Intern &operator=(const Intern& rhs);
    ~Intern(void);

		AForm* makeForm(const std::string& formName, const std::string& formTarget);
};

std::ostream& operator<<(std::ostream& output, const Intern& instance);
std::string lowercasify(const std::string& str);
//public forms
static const std::string publicForms[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};

#endif // INTERN_HPP

#include "PresidentialPardonForm.hpp"
#include <string>
#include <iostream>

PresidentialPardonForm::PresidentialPardonForm(void) {}

PresidentialPardonForm::PresidentialPardonForm(const std::string& target) : AForm("Presidential Pardon Form", 25, 5), _target(target) {}

PresidentialPardonForm::~PresidentialPardonForm(void) {}


PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& instance) : AForm(instance), _target(instance._target)
{
	operator=(instance);
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& rhs)
{
	return *this;
}

void PresidentialPardonForm::execute(Bureaucrat const& executor) const
{
	if (isSigned() && executor.getGrade() <= _gradeExec)
	{
		std::cout << _target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
	}
	else
		throw AForm::GradeTooLowException();

}

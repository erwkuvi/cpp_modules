#include "PresidentialPardonForm.hpp"
#include <string>
#include <iostream>

PresidentialPardonForm::PresidentialPardonForm(void) {}

PresidentialPardonForm::PresidentialPardonForm(const std::string& target) : AForm(target, 25, 5) {}

PresidentialPardonForm::~PresidentialPardonForm(void) {}

void PresidentialPardonForm::formSigned(Bureaucrat const& bureaucrat)
{
	if (bureaucrat.getGrade() <= _gradeSigned)
		_signed = true;
	else
		throw AForm::GradeTooHighException();
}

void PresidentialPardonForm::execute(Bureaucrat const& executor) const
{
	if (isSigned() && executor.getGrade() <= _gradeExec)
	{
		std::cout << _name << " has been pardoned by Zaphod Beeblebrox." << std::endl;
	}
	else
		throw AForm::GradeTooLowException();

}

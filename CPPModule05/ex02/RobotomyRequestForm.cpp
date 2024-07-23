#include "RobotomyRequestForm.hpp"
#include "AForm.hpp"
#include <string>
#include <iostream>

RobotomyRequestForm::RobotomyRequestForm(const std::string& target) : AForm(target, 72, 45) {}

RobotomyRequestForm::~RobotomyRequestForm(void) {}

void RobotomyRequestForm::formSigned(Bureaucrat const& bureaucrat)
{
	if (bureaucrat.getGrade() <= _gradeSigned)
		_signed = true;
	else
		throw AForm::GradeTooHighException();
}

void RobotomyRequestForm::execute(Bureaucrat const& executor) const
{
	std::cout << "... ** drilling sounds... **\n" << ".. ** still some drilling sounds **" << std::endl;
	if (isSigned() && executor.getGrade() <= _gradeExec)
		std::cout << _name << " has been robotomized successfully 50% of the time." << std::endl;
	else
	{
		std::cout << _name << " has not been robotomized successfully. " << std::endl;
		throw AForm::GradeTooLowException();
	}
}


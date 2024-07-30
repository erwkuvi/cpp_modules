#include "RobotomyRequestForm.hpp"
#include "AForm.hpp"
#include <cstdlib>
#include <ctime>
#include <string>
#include <iostream>

RobotomyRequestForm::RobotomyRequestForm(const std::string& target) : AForm("Robotomy Request Form", 72, 45), _target(target) {}

RobotomyRequestForm::~RobotomyRequestForm(void) {}


RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& instance) : AForm(instance), _target(instance._target)
{
	operator=(instance);
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& rhs)
{
	if (this != &rhs)
	{

	}
	return *this;
}

void RobotomyRequestForm::execute(Bureaucrat const& executor) const
{
	if (isSigned() && executor.getGrade() <= (*this).getGradeExec())
	{
		std::cout << "... ** drilling sounds... **\n" << ".. ** still some drilling sounds **" << std::endl;
		std::srand(static_cast<unsigned int>(std::time(NULL)));
		int randVal = std::rand() % 100 + 1;
		//std::cout << "Random Value on [0, " << RAND_MAX << "]: " << randVal << std::endl;
		if (randVal % 2)
			std::cout << _target << " has been robotomized successfully 50% of the time." << std::endl;
		else
			std::cout << _target << " has NOT been successfully robotomized." << std::endl;
	}
	else
		throw Bureaucrat::GradeTooLowException();
}


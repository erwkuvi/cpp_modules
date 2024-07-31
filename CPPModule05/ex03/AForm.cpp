#include "AForm.hpp"
#include <string>
#include <iostream>
#include <exception>
 
AForm::AForm(void) : _gradeSigned(0), _gradeExec(0) {}

AForm::~AForm(void) {}

AForm::AForm(const std::string& name, int gradeSign, int gradeExec) : _name(name),  _signed(false), _gradeSigned(checkGrade(gradeSign)), _gradeExec(checkGrade(gradeExec)){}


void AForm::beSigned(Bureaucrat& bureaucrat)
{
	if (bureaucrat.getGrade() <= _gradeSigned) 
	{
		if (_signed)
			std::cout << MAGENTA << _name << " is already signed" << RESET << std::endl;
		_signed = true;
	}
	else 
		throw AForm::GradeTooHighException();
}


AForm::AForm(const AForm& instance) : _name(instance._name), _gradeSigned(instance._gradeSigned), _gradeExec(instance._gradeExec)
{
	operator=(instance);
}

AForm& AForm::operator=(const AForm& rhs)
{
	if (this != &rhs)
		_signed = rhs.isSigned();
	return *this;
}

const std::string& AForm::getName() const {return _name;}

bool AForm::isSigned() const {return _signed;}

int AForm::getGradeSigned() const {return _gradeSigned;}

int AForm::getGradeExec() const {return _gradeExec;}

int AForm::checkGrade(int grade) const
{
	if(grade < 1 )
	{
		grade = 1;
		throw GradeTooHighException();
	}
	else if(grade > 150)
	{
		grade = 150;
		throw GradeTooLowException();
	}
	return grade;
}

AForm::GradeTooHighException::GradeTooHighException() : std::exception()
{
	what();
}

const char* AForm::GradeTooHighException::what() const throw()
{
	return "Form grade is too high and can't be signed or executed";
}

AForm::GradeTooLowException::GradeTooLowException() : std::exception()
{
	what();
}

const char* AForm::GradeTooLowException::what() const throw()
{
	return "Form grade is too low and can't be signed or executed";
}

AForm::InvalidForm::InvalidForm() : std::exception()
{
	what();
}

const char* AForm::InvalidForm::what() const throw()
{
	return "Error: Form not found";
}


std::ostream& operator<<(std::ostream& output, const AForm& rhs)
{
	std::string	txt("no");
	if (rhs.isSigned())
		txt = "yes";

	output << "AForm Name: " << rhs.getName() << "\nSigned: " << txt << "\n Grade required to sign: " << rhs.getGradeSigned() << "\nGrade required to execute: " << rhs.getGradeExec() << std::endl;
	return output;
}


#include "Form.hpp"
#include <string>
#include <iostream>
#include <exception>

Form::Form(void) : _gradeSigned(0), _gradeExec(0) {}

Form::~Form(void) {}

Form::Form(const std::string& name, int gradeSign, int gradeExec) : _name(name),  _signed(false), _gradeSigned(checkGrade(gradeSign)), _gradeExec(checkGrade(gradeExec)){}

void Form::beSigned(Bureaucrat& bureaucrat)
{
	if (bureaucrat.getGrade() <= _gradeSigned) 
		_signed = true;
	else 
		throw Form::GradeTooLowException();
}

const std::string& Form::getName() const {return _name;}

bool Form::isSigned() const {return _signed;}

int Form::getGradeSigned() const {return _gradeSigned;}

int Form::getGradeExec() const {return _gradeExec;}

int Form::checkGrade(int grade) const
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

Form::GradeTooHighException::GradeTooHighException() : std::exception()
{
	what();
}

const char* Form::GradeTooHighException::what() const throw()
{
	return "Form grade is too high";
}

Form::GradeTooLowException::GradeTooLowException() : std::exception()
{
	what();
}

const char* Form::GradeTooLowException::what() const throw()
{
	return "Form grade is too low";
}


std::ostream& operator<<(std::ostream& output, const Form& rhs)
{
	std::string	txt("no");
	if (rhs.isSigned())
		txt = "yes";

	output << "Form Name: " << rhs.getName() << "\nSigned: " << txt << "\n Grade required to sign: " << rhs.getGradeSigned() << "\nGrade required to execute: " << rhs.getGradeExec() << std::endl;
	return output;
}


#include "Form.hpp"
#include <string>
#include <iostream>
#include <exception>

//Form::Form(void) {}

Form::~Form(void) {}

Form::Form(const std::string& name, int gradeSign, int gradeExec) : _name(name),  _signed(false), _gradeSigned(gradeSign), _gradeExec(gradeExec){}

void Form::beSigned(Bureaucrat& bureaucrat) 
{
	if (bureaucrat.getGrade() <= _gradeSigned) 
		_signed = true;
	else 
		throw GradeTooLowException();
}

const std::string& Form::getName() const {return _name;}

bool Form::isSigned() const {return _signed;}

int Form::getGradeSigned() const {return _gradeSigned;}

int Form::getGradeExec() const {return _gradeExec;}


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
	return "Form grade is low high";
}


std::ostream& operator<<(std::ostream& output, const Form& rhs)
{
	output << rhs.getName() << ", form grade to sign " << rhs.getGradeSigned() << ", form grade to execute " << rhs.getGradeExec();
	return output;
}


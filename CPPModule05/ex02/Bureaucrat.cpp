#include "Bureaucrat.hpp"
#include <exception>
#include <iostream>

Bureaucrat::GradeTooHighException::GradeTooHighException() : std::exception()
{
	what();
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Bureaucrat grade is too high";
}

Bureaucrat::GradeTooLowException::GradeTooLowException() : std::exception()
{
	what();
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Bureaucrat grade is low high";
}


// In case you need to pass an  argument
Bureaucrat::Bureaucrat(const std::string& name, size_t grade) : _name(name), _grade(grade) 
{
	//std::cout << "Bureaucrat Constructor called" << std::endl; 
	if (grade < 1 || grade > 150) 
	{
		if (grade < 1) 
		{
			throw GradeTooLowException();
		} else {
			throw GradeTooHighException();
		}
	}
}


Bureaucrat::Bureaucrat(const Bureaucrat& instance) : _name(instance._name)
{
	operator=(instance);
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& rhs)
{
	if(this != &rhs)
		_grade = rhs.getGrade();

	return *this;
}

Bureaucrat::~Bureaucrat(void) {}

const std::string& Bureaucrat::getName() const
{
	return _name;
}

int Bureaucrat::getGrade() const
{
	return _grade;
}

void Bureaucrat::incrementGrade()
{
	if (_grade > 1) 
		_grade--; 
	else
		throw GradeTooHighException();
}

void Bureaucrat::decrementGrade()
{
	if (_grade < 150) 
		_grade++;
	else 
		throw GradeTooLowException();
}

void Bureaucrat::signForm(AForm& form)
{
	try
	{
    form.beSigned(*this);
    std::cout << _name << " signed " << form.getName() << std::endl;
  } 
	catch (const std::exception& e) 
	{
    std::cout << _name << " couldn't sign " << form.getName() << " because " << e.what() << std::endl;
  }
}

void Bureaucrat::executeForm(const AForm& form)
{
	try
	{
		form.execute(*this);
		std::cout << _name << " executed " << form.getName() << std::endl;
	}
	catch(std::exception& e)
	{
		std::cerr << _name << " unable to execute form " << form.getName() << std::endl;

	}
}


std::ostream& operator<<(std::ostream& output, const Bureaucrat& instance)
{

	output << instance.getName() << ", bureaucrat grade " << instance.getGrade();
	return output;
}


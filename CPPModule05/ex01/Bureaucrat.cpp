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

Bureaucrat::Bureaucrat(void) : _name("none"), _grade(0)
{
	//std::cout << "Bureaucrat Default constructor called" << std::endl; 
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

Bureaucrat::Bureaucrat(const Bureaucrat& instance)
{
	//std::cout << "Bureaucrat Copy constructor called" << std::endl; 
	operator=(instance);
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& rhs)
{
	if (this != &rhs) 
	{
		//_name = rhs._name;
		_grade = rhs._grade;
	}
	return *this;
}

Bureaucrat::~Bureaucrat(void) //
{
	//std::cout << "Bureaucrat Destructor called" << std::endl; 
}

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

void Bureaucrat::signForm()
{
	try
	{
    _form.beSigned(*this);
    std::cout << _name << " signed " << _form.getName() << std::endl;
  } 
	catch (const FormNotExecutableException& e) 
	{
    std::cout << _name << " couldn't sign " << _form.getName() << " because " << e.what() << std::endl;
  }
}


std::ostream& operator<<(std::ostream& output, const Bureaucrat& instance)
{

	output << instance.getName() << ", bureaucrat grade " << instance.getGrade();
	return output;
}

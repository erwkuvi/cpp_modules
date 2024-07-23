#include "ShrubberyCreationForm.hpp"
#include "AForm.hpp"
#include <fstream>
#include <iostream>

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target) : AForm(target, 145, 137) {}

ShrubberyCreationForm::~ShrubberyCreationForm(void) {}

void ShrubberyCreationForm::formSigned(Bureaucrat const& bureaucrat)
{
	if (bureaucrat.getGrade() <= _gradeSigned) 
		_signed = true;
	else 
		throw AForm::GradeTooHighException();
}

void ShrubberyCreationForm::execute(Bureaucrat const& executor) const
{
	if (isSigned() && executor.getGrade() <= _gradeExec)
	{
		std::ofstream file(_name + "_shrubbery");
		file << "         $$$\n"
			<< "       $$$$$$$\n"
			<< "      $$$$$$$$$$\n"
			<< "     $$$$$$$$$$$$$\n"
			<< "    $$$$$$$$$$$$$$$$$\n"
			<< "   $$$$$$$$$$$$$$$$$$$$$\n"
			<< "  $$$$$$$$$$$$$$$$$$$$$$$$$\n"
			<< " $$$$$$$$$$$$$$$$$$$$$$$$$$$$\n"
			<< "$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n";
		file.close();
	}
	else
		throw Bureaucrat::GradeTooLowException();
}

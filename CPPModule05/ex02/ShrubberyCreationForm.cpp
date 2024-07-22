#include "ShrubberyCreationForm.hpp"
#include <fstream>
#include <iostream>

ShrubberyCreationForm::ShrubberyCreationForm(void) {}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target) : AForm(target, 145, 137) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& instance)
{operator=(instance);}

ShrubberyCreationForm::~ShrubberyCreationForm(void) {}

void ShrubberyCreationForm::formSigned(Bureaucrat const& bureaucrat)
{
	if (bureaucrat.getGrade() <= _gradeSigned) 
		_signed = true;
	else 
		throw AForm::GradeTooLowException();
}

void ShrubberyCreationForm::execute(Bureaucrat const& executor) const
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

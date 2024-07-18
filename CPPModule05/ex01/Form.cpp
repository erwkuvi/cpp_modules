#include "Form.hpp"
#include <string>
#include <iostream>

Form::Form(const std::string& name, int gradeSign, int gradeExec) : _name(name),  _signed(false), _gradeSigned(gradeSign), _gradeExec(gradeExec)
{
	//std::cout << "Form Default constructor called" << std::endl; 
}

// In case you need to pass an  argument
//Form::Form(const std::string& arg) //: _init(arg)
//{
//	std::cout << "Form Constructor called" << std::endl; 
//}


Form::~Form(void) //
{
	//std::cout << "Form Destructor called" << std::endl; 
}

	//Further members implementations ..




	//output operator overload ..

std::ostream& operator<<(std::ostream& output, const Form& rhs)
{
	output << implemetation <<;
	return output;
}


#ifndef FORM_HPP
#define FORM_HPP
#include <string>
#include "Bureaucrat.hpp"

class  Bureaucrat;
class Form 
{
private:
	const std::string _name;
	bool 							_signed;
	const int 				_gradeSigned;
	const int 				_gradeExec;
	Form(const Form& instance);
	Form &operator=(const Form& rhs);

public:
	class GradeTooHighException : public std::exception
	{
		public:
			GradeTooHighException();
			virtual const char* what() const throw();

	};
	class GradeTooLowException : public std::exception
	{
		public:
			GradeTooLowException();
			virtual const char* what() const throw();
	};
    Form(const std::string& name, int gradeSign, int gradeExec); 
    Form(void);
    ~Form(void);
//Orthodox canonical end

		beSigned(Bureaucrat& bureaucrat);
		const std::string& getName() const;
		bool isSigned() const;
		int getGradeSigned() const;
		int getGradeExec() const;

};

std::ostream& operator<<(std::ostream& output, const Form& instance);

#endif // FORM_HPP




//DEFINITION OF THE CLASS BELOW




#include "Form.hpp"
#include <string>
//#include <ostream>

Form::Form(void) //: _init(some)
{
	std::cout << "Form Default constructor called" << std::endl; 
}

// In case you need to pass an  argument
//Form::Form(const std::string& arg) //: _init(arg)
//{
//	std::cout << "Form Constructor called" << std::endl; 
//}

Form::Form(const Form& instance)
{
	std::cout << "Form Copy constructor called" << std::endl; 
	operator=(instance);
}

Form& Form::operator=(const Form& rhs)
{
	if (this != &rhs)
		{
			//implementation of the copying
		}
	return *this;
}

Form::~Form(void) //
{
	std::cout << "Form Destructor called" << std::endl; 
}

	//Further members implementations ..




	//output operator overload ..

std::ostream& operator<<(std::ostream& output, const Form& rhs)
{
	output << // implemetation <<;
	return output;
}


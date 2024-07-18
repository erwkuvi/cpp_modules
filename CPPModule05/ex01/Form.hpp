#ifndef FORM_HPP
# define FORM_HPP
# include <string>
# include "Bureaucrat.hpp"

//class  Bureaucrat;
class Form 
{
private:
	const std::string _name;
	bool 							_signed;
	const int 				_gradeSigned;
	const int 				_gradeExec;
	Form(void);
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
    ~Form(void);
//Orthodox canonical end

		void beSigned(Bureaucrat& bureaucrat);
//Getters
		const std::string& getName() const;
		bool isSigned() const;
		int getGradeSigned() const;
		int getGradeExec() const;

};

std::ostream& operator<<(std::ostream& output, const Form& instance);

# endif // FORM_HPP

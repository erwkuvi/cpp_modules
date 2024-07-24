#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include <exception>
#include <cstddef>
#include <string>
#include <iostream>
#include "Form.hpp"

class Form;

class Bureaucrat 
{
private:
	const std::string _name;
	int 	 						_grade;
	Bureaucrat(void);

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
    Bureaucrat(const std::string& name, size_t grade); 
		Bureaucrat(const Bureaucrat& instance);
		Bureaucrat &operator=(const Bureaucrat& rhs);
    ~Bureaucrat(void);

		const std::string& getName() const;
		int getGrade() const;
		void incrementGrade();
		void decrementGrade();
		void signForm(Form& form);

};

std::ostream& operator<<(std::ostream& output, const Bureaucrat& instance);

#endif // BUREAUCRAT_HPP

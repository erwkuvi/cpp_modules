#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <cstddef>
//#include <stdexcept>
#include <string>
#include <ostream>

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
    ~Bureaucrat(void);
		Bureaucrat(const Bureaucrat& instance);
		Bureaucrat &operator=(const Bureaucrat& rhs);

		const std::string& getName() const;
		int getGrade() const;
		void incrementGrade();
		void decrementGrade();

};

std::ostream& operator<<(std::ostream& output, const Bureaucrat& instance);

#endif // BUREAUCRAT_HPP
			 //
	//Any attempt to instantiate a Bureaucrat using an invalid grade must throw an exception:
	//either a Bureaucrat::GradeTooHighException or a Bureaucrat::GradeTooLowException.

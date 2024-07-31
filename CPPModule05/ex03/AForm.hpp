#ifndef AFORM_HPP
# define AFORM_HPP
# include "Bureaucrat.hpp"
# define RESET				"\033[0m"
# define GREEN				"\033[32m"
# define YELLOW				"\033[33m"
# define BLUE    			"\033[34m"
# define MAGENTA 			"\033[35m"
# define RED     			"\033[31m"

class Bureaucrat;

class AForm 
{
	private:
		const std::string _name;
		bool 							_signed;
		const int 				_gradeSigned;
		const int 				_gradeExec;
		int checkGrade(int grade) const;
		AForm(void);

	public:
		class GradeTooHighException : public std::exception
	{
		public:
			GradeTooHighException();
			virtual const char* what() const throw();

	};
		class InvalidForm : public std::exception
	{
		public:
			InvalidForm();
			virtual const char* what() const throw();
	};
		class GradeTooLowException : public std::exception
	{
		public:
			GradeTooLowException();
			virtual const char* what() const throw();
	};

//Public area of the class

		AForm(const std::string& name, int gradeSign, int gradeExec); 
		AForm(const AForm& instance);
		AForm& operator=(const AForm& rhs);
		virtual ~AForm(void);

		void beSigned(Bureaucrat& bureaucrat);
		//Getters
		const std::string& getName() const;
		bool isSigned() const;
		int getGradeSigned() const;
		int getGradeExec() const;

		//Getters
		virtual void execute(Bureaucrat const& executor) const = 0;

};

std::ostream& operator<<(std::ostream& output, const AForm& instance);

# endif // AFORM_HPP

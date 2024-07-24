#ifndef AFORM_HPP
# define AFORM_HPP
# include "Bureaucrat.hpp"

class Bureaucrat;

class AForm 
{
	protected:
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

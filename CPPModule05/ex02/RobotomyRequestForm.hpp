#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP
# include "AForm.hpp"

class RobotomyRequestForm : public AForm 
{
	private:
		RobotomyRequestForm(void);
		RobotomyRequestForm(const RobotomyRequestForm& instance);
		RobotomyRequestForm &operator=(const RobotomyRequestForm& rhs);

	public:
		RobotomyRequestForm(const std::string& target); 
		~RobotomyRequestForm(void);

		virtual void formSigned(Bureaucrat const& bureaucrat);
		virtual void execute(Bureaucrat const& executor) const;

};

# endif // ROBOTOMYREQUESTFORM_HPP

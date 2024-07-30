#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP
# include "AForm.hpp"

class RobotomyRequestForm : public AForm 
{
	private:
		const std::string _target;
		RobotomyRequestForm(void);

	public:
		RobotomyRequestForm(const RobotomyRequestForm& instance);
		RobotomyRequestForm &operator=(const RobotomyRequestForm& rhs);
		RobotomyRequestForm(const std::string& target); 
		~RobotomyRequestForm(void);

		virtual void execute(Bureaucrat const& executor) const;
};

# endif // ROBOTOMYREQUESTFORM_HPP

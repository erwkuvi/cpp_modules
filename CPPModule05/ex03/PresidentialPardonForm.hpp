#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP
# include "AForm.hpp"

class PresidentialPardonForm : public AForm 
{
	private:
		const std::string _target;
		PresidentialPardonForm(void);

	public:
		PresidentialPardonForm(const PresidentialPardonForm& instance);
		PresidentialPardonForm &operator=(const PresidentialPardonForm& rhs);
		PresidentialPardonForm(const std::string& target); 
		~PresidentialPardonForm(void);

		virtual void execute(Bureaucrat const& executor) const;

};
# endif // PRESIDENTIALPARDONFORM_HPP

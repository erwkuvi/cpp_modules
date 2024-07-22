#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP
# include "AForm.hpp"

class PresidentialPardonForm : public AForm 
{
	private:
		PresidentialPardonForm(const PresidentialPardonForm& instance);
		PresidentialPardonForm &operator=(const PresidentialPardonForm& rhs);
		PresidentialPardonForm(void);

	public:
		PresidentialPardonForm(const std::string& target); 
		~PresidentialPardonForm(void);

		virtual void formSigned(Bureaucrat const& bureaucrat) const;
		virtual void execute(Bureaucrat const& executor) const;

};

# endif // PRESIDENTIALPARDONFORM_HPP

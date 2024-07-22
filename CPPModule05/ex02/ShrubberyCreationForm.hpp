#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP
# include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
	private:
		ShrubberyCreationForm(void);
		ShrubberyCreationForm(const ShrubberyCreationForm& instance);
		ShrubberyCreationForm &operator=(const ShrubberyCreationForm& rhs);

	public:
		ShrubberyCreationForm(const std::string& target); 
		~ShrubberyCreationForm(void);

		void formSigned(Bureaucrat const& bureaucrat);
		void execute(Bureaucrat const& executor) const;

};

# endif // SHRUBBERYCREATIONFORM_HPP

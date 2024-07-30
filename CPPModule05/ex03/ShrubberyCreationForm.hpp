#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP
# include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
	private:
		const std::string _target;
		ShrubberyCreationForm(void);

	public:
		ShrubberyCreationForm(const ShrubberyCreationForm& instance);
		ShrubberyCreationForm &operator=(const ShrubberyCreationForm& rhs);
		ShrubberyCreationForm(const std::string& target); 
		~ShrubberyCreationForm(void);

		void execute(Bureaucrat const& executor) const;

};

# endif // SHRUBBERYCREATIONFORM_HPP

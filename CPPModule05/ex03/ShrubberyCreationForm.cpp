#include "ShrubberyCreationForm.hpp"
#include "AForm.hpp"
#include <fstream>


ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target) : AForm("Shrubbery Creation Form", 145, 137), _target(target) {}

ShrubberyCreationForm::~ShrubberyCreationForm(void) {}


ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& instance) : AForm(instance), _target(instance._target)
{
	operator=(instance);
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& rhs)
{
	if(this != &rhs)
	{

	}
	return *this;
}

void ShrubberyCreationForm::execute(Bureaucrat const& executor) const
{
	if (isSigned() && executor.getGrade() <= (*this).getGradeExec())
	{
		std::ofstream file(_target + "_shrubbery");
		file << " \n"
				<< "		                                                         .\n"
				<< "                                              .         ;  \n"
				<< "                 .              .              ;%     ;;   \n"
				<< "                   ,           ,                :;%  %;   \n"
				<< "                    :         ;                   :;%;'     .,   \n"
				<< "           ,.        %;     %;            ;        %;'    ,;\n"
				<< "             ;       ;%;  %%;        ,     %;    ;%;    ,%'\n"
				<< "              %;       %;%;      ,  ;       %;  ;%;   ,%;' \n"
				<< "               ;%;      %;        ;%;        % ;%;  ,%;'\n"
				<< "                `%;.     ;%;     %;'         `;%%;.%;'\n"
				<< "                 `:;%.    ;%%. %@;        %; ;@%;%'\n"
				<< "                    `:%;.  :;bd%;          %;@%;'\n"
				<< "                      `@%:.  :;%.         ;@@%;'   \n"
				<< "                        `@%.  `;@%.      ;@@%;         \n"
				<< "                          `@%%. `@%%    ;@@%;        \n"
				<< "                            ;@%. :@%%  %@@%;       \n"
				<< "                              %@bd%%%bd%%:;     \n"
				<< "                                #@%%%%%:;;\n"
				<< "                                %@@%%%::;\n"
				<< "                                %@@@%(o);  . '         \n"
				<< "                                %@@@o%;:(.,'         \n"
				<< "                            `.. %@@@o%::;         \n"
				<< "                               `)@@@o%::;         \n"
				<< "                                %@@(o)::;        \n"
				<< "                               .%@@@@%::;         \n"
				<< "                               ;%@@@@%::;.          \n"
				<< "                              ;%@@@@%%:;;;. \n"
				<< "                          ...;%@@@@@%%:;;;;,..\n";
		file.close();
	}
	else
		throw Bureaucrat::GradeTooLowException();
}

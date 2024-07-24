#include "ShrubberyCreationForm.hpp"
#include "AForm.hpp"
#include <fstream>


ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target) : AForm("Shrubbery Creation Form", 145, 137) {}

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
	if (isSigned() && executor.getGrade() <= _gradeExec)
	{
		std::ofstream file(_target + "_shrubbery");
		file << " "
				<< "		                                                         ."
				<< "                                              .         ;  "
				<< "                 .              .              ;%     ;;   "
				<< "                   ,           ,                :;%  %;   "
				<< "                    :         ;                   :;%;'     .,   "
				<< "           ,.        %;     %;            ;        %;'    ,;"
				<< "             ;       ;%;  %%;        ,     %;    ;%;    ,%'"
				<< "              %;       %;%;      ,  ;       %;  ;%;   ,%;' "
				<< "               ;%;      %;        ;%;        % ;%;  ,%;'"
				<< "                `%;.     ;%;     %;'         `;%%;.%;'"
				<< "                 `:;%.    ;%%. %@;        %; ;@%;%'"
				<< "                    `:%;.  :;bd%;          %;@%;'"
				<< "                      `@%:.  :;%.         ;@@%;'   "
				<< "                        `@%.  `;@%.      ;@@%;         "
				<< "                          `@%%. `@%%    ;@@%;        "
				<< "                            ;@%. :@%%  %@@%;       "
				<< "                              %@bd%%%bd%%:;     "
				<< "                                #@%%%%%:;;"
				<< "                                %@@%%%::;"
				<< "                                %@@@%(o);  . '         "
				<< "                                %@@@o%;:(.,'         "
				<< "                            `.. %@@@o%::;         "
				<< "                               `)@@@o%::;         "
				<< "                                %@@(o)::;        "
				<< "                               .%@@@@%::;         "
				<< "                               ;%@@@@%::;.          "
				<< "                              ;%@@@@%%:;;;. "
				<< "                          ...;%@@@@@%%:;;;;,..";
		file.close();
	}
	else
		throw Bureaucrat::GradeTooLowException();
}

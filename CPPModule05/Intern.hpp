#ifndef INTERN_HPP
#define INTERN_HPP
#include <string>
#include "AForm.hpp"

class Intern 
{
	private:

	public:
		//Intern(const std::string& arg); // In case you need to pass an  argument
		//Orthodox canonical begin
		Intern(void);
		Intern(const Intern& instance);
		Intern &operator=(const Intern& rhs);
		~Intern(void);
		//Orthodox canonical end

		AForm* makeForm(const std::string& formName, const std::string& formTarget);
};

std::ostream& operator<<(std::ostream& output, const Intern& instance);

#endif // INTERN_HPP

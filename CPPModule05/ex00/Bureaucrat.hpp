#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include <string>

class Bureaucrat 
{
private:
	const std::string _name;
	int 							grade;

public:
    //Bureaucrat(const std::string& arg); // In case you need to pass an  argument
//Orthodox canonical begin
    Bureaucrat(void);
    Bureaucrat(const Bureaucrat& instance);
    Bureaucrat &operator=(const Bureaucrat& rhs);
    ~Bureaucrat(void);
//Orthodox canonical end

    // Add your class members and methods here
};

std::ostream& operator<<(std::ostream& output, const Bureaucrat& instance);

#endif // BUREAUCRAT_HPP




//DEFINITION OF THE CLASS BELOW




#include "Bureaucrat.hpp"
#include <string>
//#include <ostream>

Bureaucrat::Bureaucrat(void) //: _init(some)
{
	std::cout << "Bureaucrat Default constructor called" << std::endl; 
}

// In case you need to pass an  argument
//Bureaucrat::Bureaucrat(const std::string& arg) //: _init(arg)
//{
//	std::cout << "Bureaucrat Constructor called" << std::endl; 
//}

Bureaucrat::Bureaucrat(const Bureaucrat& instance)
{
	std::cout << "Bureaucrat Copy constructor called" << std::endl; 
	operator=(instance);
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& rhs)
{
	if (this != &rhs)
		{
			//implementation of the copying
		}
	return *this;
}

Bureaucrat::~Bureaucrat(void) //
{
	std::cout << "Bureaucrat Destructor called" << std::endl; 
}

	//Further members implementations ..




	//output operator overload ..

std::ostream& operator<<(std::ostream& output, const Bureaucrat& rhs)
{
	output << // implemetation <<;
	return output;
}


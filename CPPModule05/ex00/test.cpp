#ifndef TEST_HPP
#define TEST_HPP
#include <string>

class test 
{
private:
    // Add your private members here

public:
    //test(const std::string& arg); // In case you need to pass an  argument
//Orthodox canonical begin
    test(void);
    test(const test& instance);
    test &operator=(const test& rhs);
    ~test(void);
//Orthodox canonical end

    // Add your class members and methods here
};

std::ostream& operator<<(std::ostream& output, const test& instance);

#endif // TEST_HPP




//DEFINITION OF THE CLASS BELOW




#include "test.hpp"
#include <string>
//#include <ostream>

test::test(void) //: _init(some)
{
	std::cout << "test Default constructor called" << std::endl; 
}

// In case you need to pass an  argument
//test::test(const std::string& arg) //: _init(arg)
//{
//	std::cout << "test Constructor called" << std::endl; 
//}

test::test(const test& instance)
{
	std::cout << "test Copy constructor called" << std::endl; 
	operator=(instance);
}

test& test::operator=(const test& rhs)
{
	if (this != &rhs)
		{
			//implementation of the copying
		}
	return *this;
}

test::~test(void) //
{
	std::cout << "test Destructor called" << std::endl; 
}

	//Further members implementations ..




	//output operator overload ..

std::ostream& operator<<(std::ostream& output, const test& rhs)
{
	output << // implemetation <<;
	return output;
}


#include <iostream>
#include <string>

const char* green = "\033[0;32m";
const char* yellow = "\033[0;33m";
const char* reset = "\033[0m";

int	main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << yellow << "[STRING ADDRESS] " << reset;
	std::cout << &str << std::endl;
	std::cout << yellow << "[STRING POINTER POINTED ADDRESS] " << reset;
	std::cout << stringPTR << std::endl;
	std::cout << yellow << "[STRING REFERENCE POINTED ADDRESS] " << reset;
	std::cout << &stringREF << std::endl;
	std::cout << green << "[ACTUAL STRING] " << reset;
	std::cout << str << std::endl;
	std::cout << green << "[STRING POINTER POINTS TO] " << reset;
	std::cout << *stringPTR << std::endl;
	std::cout << green << "[STRING REFERENCE IS REFERENCED TO] " << reset;
	std::cout << stringREF << std::endl;

	return 0;
}

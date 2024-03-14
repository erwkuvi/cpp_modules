#include "Harl.hpp"
#include <iostream>

int main(void)
{
	Harl instance;

	instance.complain("DEBUG");
	std::cout << std::endl;
	instance.complain("INFO");
	std::cout << std::endl;
	instance.complain("WARNING");
	std::cout << std::endl;
	instance.complain("ERROR");
	std::cout << std::endl;
	instance.complain("");
	return 0;
}

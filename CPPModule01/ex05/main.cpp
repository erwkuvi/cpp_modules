#include "Harl.hpp"

int main(void)
{
	Harl instance;

	instance.complain("DEBUG");
	instance.complain("INFO");
	instance.complain("WARNING");
	instance.complain("ERROR");
	return 0;
}

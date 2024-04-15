#include "DiamondTrap.hpp"

int main(void)
{
	DiamondTrap g ("Gregorio");
	g.whoAmI();
	g.highFives();
	g.guardGate();
	std::cout << g << std::endl;
	return 0 ;
}

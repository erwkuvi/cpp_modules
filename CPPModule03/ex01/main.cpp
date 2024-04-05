#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap b("Benny");
	ClapTrap p("Paulo");
	std::cout << b << std::endl;
	std::cout << p << std::endl;
	b.attack("Paulo"); 
	p.takeDamage(b.getter("ad"));
	std::cout << b << std::endl;
	std::cout << p << std::endl;
	p.setDamagePowerUp(3);
	p.attack("Benny");
	b.takeDamage(p.getter("ad"));
	std::cout << b << std::endl;
	std::cout << p << std::endl;
	b.beRepaired(2);
	std::cout << b << std::endl;
	std::cout << p << std::endl;

	return 0 ;
}

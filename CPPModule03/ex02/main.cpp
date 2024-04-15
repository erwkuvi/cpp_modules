#include "FragTrap.hpp"

int main(void)
{
	FragTrap a ("Anton");
	FragTrap* z = new FragTrap("Zeriberto");
	FragTrap b ("Beto");
	std::cout << "z" << *z << "\n" << std::endl;
	std::cout << "a" << a << "\n" << std::endl;
	std::cout << "b" << b << "\n" << std::endl;
	for(int i = 0; i < 10; i++)
	{
		a.attack("Beto");
		b.takeDamage(a.getter("ad"));
	}
	a = b;
	std::cout << "a" << a << "\n" << std::endl;
	std::cout << "b" << b << "\n" << std::endl;
	//std::cout << "b" << b << "\n" << std::endl;
	delete z; 
	//b.beRepaired(20);
	//std::cout << b << "\n" << std::endl;
	a.highFives();
	return 0 ;
}

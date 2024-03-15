#include "Zombie.hpp"

int main (void)
{
	Zombie* manyZombies = zombieHorde(5, "genericZombie");

	manyZombies->setName("leader zombie");
	manyZombies[3].setName("Gregorio Perez");
		for(int i = 0; i < 5; i++)
	{
		std::cout << i << ": ";
		manyZombies[i].announce();
	}

	delete[] manyZombies;
	return 0;
}


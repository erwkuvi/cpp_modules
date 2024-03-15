#include "Zombie.hpp"

int main (void)
{
	Zombie instance("Foo");

	instance.announce();
	Zombie	*zombCopy = instance.newZombie("HeapZombie");
	zombCopy->announce();
	instance.randomChump("StackZombie");
	delete zombCopy;
	return 0;
}


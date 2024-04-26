#include <iostream>
#include "Ice.hpp"
#include "Cure.hpp"
#include "FloorList.hpp"

int main (void)
{
	AMateria *a = new Ice();
	AMateria *b = new Cure();
	FloorList list;

	std::cout << "This Materia is type: "<< a->getType() << std::endl;
	std::cout << "This Materia is type: "<< b->getType() << std::endl;
	return 0;
}

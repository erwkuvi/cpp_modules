#include <iostream>
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "FloorList.hpp"

int main (void)
{
	AMateria *a = new Ice();
	AMateria *b = new Cure();
	FloorList list;
  ICharacter *c = new Character("Luis");

	for(int i = 0; i < 3; i++)
		c->equip(a);
	for(int i = 0; i < 3; i++)
		c->unequip(a);
	c->getList().printList();
	delete c;
	delete b;
	return 0;
}
//int main (void)
//{
//	AMateria *a = new Ice();
//	AMateria *b = new Cure();
//	FloorList list;
//  ICharacter *c = new Character("Luis");
//
//	std::cout << BLUE << "This Materia is type: "<< a->getType() << RESET << std::endl;
//	std::cout << BLUE << "This Materia is type: "<< b->getType() << RESET << std::endl;
//	std::cout << RED << "This Character is : "<< c->getName() << RESET << std::endl;
//	std::cout << RED <<  c->getName() << RESET << std::endl;
//	for(int i = 0; i < 3; i++)
//		c->equip(a);
//	std::cout << "STOP" << std::endl;
//	//for(int i = 0; i < 3; i++)
//		//c->unequip(a);
//	c.getList();
//	delete c;
//	delete b;
//	return 0;
//}

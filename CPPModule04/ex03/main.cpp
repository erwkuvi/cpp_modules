#include <iostream>
#include "AMateria.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "FloorList.hpp"
#include "MateriaSource.hpp"

int main (void)
{
	Character instance("Test");
	Character instance2("Test2");
	Character dub(instance);
	AMateria* cure = new Cure();
	AMateria* ice = new Ice();
	std::cout << instance.getName() << std::endl;
	std::cout << instance2.getName() << std::endl;
	instance.equip(cure);
	instance2.equip(ice);
	//cure = ice;
	std::cout << cure->getType() << std::endl;
	std::cout << dub.getName() << std::endl;
	delete cure;
	std::cout << ice->getType() << std::endl;
	delete ice;
	return 0;
}
//int main (void)
//{
//	AMateria *a = new Ice();
//	AMateria *b = new Cure();
//	IMateriaSource* src = new MateriaSource();
//	src->learnMateria(a);
//	src->learnMateria(b);
//	ICharacter *me = new Character("Erwin");
//
//	AMateria *tmp;
//	tmp = src->createMateria("ice");
//	me->equip(tmp);
//	tmp = src->createMateria("cure");
//	me->equip(tmp);
//	me->unequip(tmp);
//	ICharacter* bob = new Character("bob");
//
//	me->use(0, *bob);
//	me->use(1, *bob);
////	c->equip(a);
////	c->equip(b);
//	std::cout << RED <<  me->getName() << RESET << std::endl;
//	delete bob;
//	delete me;
//	delete src;
//	return 0;
//
//}
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

#include "AMateria.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "FloorList.hpp"
#include "Ice.hpp"
#include "MateriaSource.hpp"
#include <iostream>

int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* me = new Character("Erwin");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	tmp = src->createMateria("test");
//	std::cout << "tmp: " << tmp << std::endl;
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
//	me->use(0, *bob);
//	me->use(1, *bob);
	me->unequip(1);
	me->unequip(4);
	me->unequip(0);
	me->getList().printList();
	Character o("Clone01");
	o.equip(new Ice());
	o.printSlots();
	std::cout << "Here is 'o2' been created and copy constructed from 'o'" << std::endl;
	Character o2(o);
	o2.printSlots();
	o2.unequip(0);
	std::cout << "Here should be printed the current Materias in posession " << std::endl;
	o2.printSlots();
	std::cout << "Here are printed the materias on the floor" << std::endl;
	o2.getList().printList();


	delete bob;
	delete me;
	delete src;
	return 0;
}
//int main(void) {
//  Character instance("Test");
//  Character instance2("Test2");
//  Character dub(instance);
//  AMateria *cure = new Cure();
//  AMateria *ice = new Ice();
//  std::cout << instance.getName() << std::endl;
//  std::cout << instance2.getName() << std::endl;
//  instance.equip(cure);
//  instance2.equip(ice);
//  // cure = ice;
//  std::cout << cure->getType() << std::endl;
//  std::cout << dub.getName() << std::endl;
//  delete cure;
//  std::cout << ice->getType() << std::endl;
//  delete ice;
//  return 0;
//}
// int main (void)
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
// int main (void)
//{
//	AMateria *a = new Ice();
//	AMateria *b = new Cure();
//	FloorList list;
//  ICharacter *c = new Character("Luis");
//
//	std::cout << BLUE << "This Materia is type: "<< a->getType() << RESET <<
//std::endl; 	std::cout << BLUE << "This Materia is type: "<< b->getType() <<
//RESET << std::endl; 	std::cout << RED << "This Character is : "<< c->getName()
//<< RESET << std::endl; 	std::cout << RED <<  c->getName() << RESET <<
//std::endl; 	for(int i = 0; i < 3; i++) 		c->equip(a); 	std::cout << "STOP" <<
//std::endl;
//	//for(int i = 0; i < 3; i++)
//		//c->unequip(a);
//	c.getList();
//	delete c;
//	delete b;
//	return 0;
//}

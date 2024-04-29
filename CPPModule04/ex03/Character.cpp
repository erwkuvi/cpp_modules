#include "Character.hpp"
#include "AMateria.hpp"
#include "FloorList.hpp"
#include "ICharacter.hpp"
//#include "FloorList.hpp"
#include <string>
#include <iostream>


Character::Character(const std::string& name) : ICharacter(name)
{
	std::cout << "Character Constructor called" << std::endl; 
}

Character::Character(void) : ICharacter("N/A") {}

Character::Character(const Character& instance)
{
	std::cout << "Character Copy constructor called" << std::endl; 
	operator=(instance);
}

Character& Character::operator=(const Character& rhs)
{
	if (this != &rhs)
		{
			ICharacter::operator=(rhs);
		}
	return *this;
}

Character::~Character(void) //
{
	std::cout << "Character Destructor called" << std::endl; 
}

const std::string& Character::getName() const
{
	return _name;
}

void Character::equip(AMateria* m)
{
	int i = 0;
	int flag = 0;
	while (_slots[i] != NULL && i < 4) 
	{
		if (_slots[i] == m)
		{
			flag = 1;
			std::cout << RED << _name << " cannot be equiped with the same Materia object" << RESET << std::endl;
		}
		i++;
	}
	if (i == 4)
		std::cout << RED << _name << " cannot be equiped with " << m->getType() << RESET << std::endl;
	if ( i != 4 && !flag)
	{
		_slots[i] = m;
		std::cout << MAGENTA << i << ": "<< _name << " equips with " << _slots[i]->getType() << RESET << std::endl;
	}
}

void Character::unequip(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if(_slots[i] == m && m)
		{
			_list.add(_slots[i]);
			_slots[i] = NULL;
			std::cout << GREEN << i << ": "<< _name << " unequips " << m->getType() << RESET << std::endl;
			return;
		}
	}
	std::cout << RED << "(unequip) Materia not found: "<< _name << " -> " << m->getType() << RESET << std::endl;
}

void Character::use (int idx, ICharacter& target) //pass the parameter to the AMateria::use function
{
	if (_slots[idx] != NULL)
		_slots[idx]->use(target);
	else
		return;
}																									 

const FloorList& Character::getList() const
{
 return _list;
}


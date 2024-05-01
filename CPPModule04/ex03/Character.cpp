#include "Character.hpp"
#include "AMateria.hpp"
#include <iostream>

Character::Character(const std::string& name) : ICharacter(name), _slots{NULL, NULL, NULL, NULL}
{
	std::cout << "Character Constructor called" << std::endl; 
}

Character::Character(void) : ICharacter("N/A") {}

Character::Character(const Character& instance) : ICharacter(instance._name), _slots{NULL, NULL, NULL, NULL}
{
	std::cout << "Character Copy constructor called" << std::endl; 
	operator=(instance);
}

Character& Character::operator=(const Character& rhs)
{
	if (this != &rhs)
	{
		_name = rhs._name; 
		for (int i = 0; i < 4; i++)
		{
			if (this->_slots[i] != NULL)
			{
				delete _slots[i];
				_slots[i] = NULL;
			}
			if (rhs._slots[i] != NULL)
				_slots[i] = rhs._slots[i]->clone();
		}
	}
	return *this;
}

Character::~Character(void) //
{
	std::cout << "Character Destructor called" << std::endl; 
	for(int i = 0; i < 4; i++)
	{
		if (_slots[i])
			delete _slots[i];
	}
}

const std::string& Character::getName() const
{
	return this->_name;
}

void Character::equip(AMateria* m)
{
	int i = 0;
	int flag = 0;
	if (!m)
		return;
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

void Character::unequip(int idx)
{
		if(_slots[idx])
		{
			std::cout << GREEN << idx << ": "<< _name << " unequips " << _slots[idx]->getType() << RESET << std::endl;
			_list.add(_slots[idx]);
			_slots[idx] = NULL;
			return;
		}
	std::cout << RED << _name << ": (unequip) Materia not found: "<< idx << RESET << std::endl;
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


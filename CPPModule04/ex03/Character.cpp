#include "Character.hpp"
#include "AMateria.hpp"
#include "FloorList.hpp"
#include <string>
#include <iostream>

Character::Character(void) //: _init(some)
{
	std::cout << "Character Default constructor called" << std::endl; 
}

Character::Character(const std::string& name) : ICharacter(name)
{
	std::cout << "Character Constructor called" << std::endl; 
}

Character::Character(const Character& instance)
{
	std::cout << "Character Copy constructor called" << std::endl; 
	operator=(instance);
}

Character& Character::operator=(const Character& rhs)
{
	if (this != &rhs)
		{
			//implementation of the copying
		}
	return *this;
}

Character::~Character(void) //
{
	std::cout << "Character Destructor called" << std::endl; 
}

	//Further members implementations ..

std::string const& Character::getName() const
{
	return _name;
}

void Character::equip(AMateria* m)
{
	int i = 0;
	while (_slots[i++] != NULL && i < 4) {}
	if (i == 4)
		return;
	else
		_slots[i] = m;
}

void Character::unequip(AMateria* m)
{
	int i = 0;
	while (&_slots[i++] == &m && i < 4){} 
	if (i == 4)
		return;
	else
	{
		const AMateria* tmp = m;
//		FloorList::add(FloorNode(tmp)); //Here comes the leftmateria class implemented add function
		_slots[i] = NULL;
	}
}

void Character::use (int idx, ICharacter& target) //pass the parameter to the AMateria::use function
{
	if (_slots[idx] != NULL)
		_slots[idx]->use(target);
	else
		return;
}																									 


	//output operator overload ..

std::ostream& operator<<(std::ostream& output, const Character& rhs)
{
	output << rhs.getName(); 
	return output;
}


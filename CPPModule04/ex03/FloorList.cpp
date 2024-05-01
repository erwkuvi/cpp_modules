#include "FloorList.hpp"
#include "AMateria.hpp"
#include <iostream>

FloorList::FloorList(void) : _head(NULL) {
}

FloorList::FloorList(const FloorList& instance)
{
	operator=(instance);
}

FloorList& FloorList::operator=(const FloorList& rhs)
{
	if (this != &rhs)
		{
			FloorNode* tmp;
			while (_head != NULL)
			{
				tmp = _head;
				_head = _head->next;
				delete tmp;
			}
			tmp = rhs._head;
			while (tmp != NULL)
			{
				FloorList::add(tmp->_leftmateria);
				tmp = tmp->next;
			}
		}
	return *this;
}

FloorList::~FloorList(void) //
{
	while(_head != NULL)
	{
		FloorNode* tmp = _head;
		_head = _head->next;
		delete tmp;
	}
}

void FloorList::add(AMateria* materia)
{
	FloorNode* newNode = new FloorNode(materia);
	if (_head == NULL)
	{
		_head = newNode;
	}
	else
	{
		FloorNode* curr = _head; 
		while(curr->next != NULL)
			curr = curr->next;
		curr->next = newNode;
	}
}

void FloorList::printList() const
{
	FloorNode* tmp = _head;
	int i = 1;
	while (tmp != NULL) 
	{
		std::cout << YELLOW << "(" << i << ") Materia on the floor: " << tmp->_leftmateria->getType() << RESET << std::endl;
		i++;
		tmp = tmp->next;
	}
}

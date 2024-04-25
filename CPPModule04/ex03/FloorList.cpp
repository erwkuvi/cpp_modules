#include "FloorList.hpp"
#include <string>

FloorList::FloorList(void) : _head(NULL) {}

FloorList::FloorList(const FloorList& instance)
{
	operator=(instance);
}

FloorList& FloorList::operator=(const FloorList& rhs)
{
	if (this != &rhs)
		{
			while (_head != NULL)
			{
				FloorNode* tmp = _head;
				_head = _head->next;
				delete tmp;
			}
			FloorNode* current = rhs._head;
			while (current != NULL)
			{
				FloorList::add(current->leftmateria);
				current = current->next;
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

void FloorList::add(const FloorNode& materia)
{
	FloorNode* newNode = new FloorNode(materia);
	if (_head == NULL)
	{
		_head = newNode;
		_head->next = NULL;
	}
	else
	{
		FloorNode* curr = _head; 
		while(curr->next != NULL)
			curr = curr->next;
		curr->next = newNode;
	}
}

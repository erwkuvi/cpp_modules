#include "FloorNode.hpp"

FloorNode::FloorNode(AMateria* materia) : _leftmateria(materia), next(NULL) {}

FloorNode::FloorNode(void) : _leftmateria(NULL), next(NULL) {}

FloorNode::FloorNode(const FloorNode& instance) : next(NULL) 
{
	operator=(instance);
}

FloorNode& FloorNode::operator=(const FloorNode& rhs)
{
	if (this != &rhs)
		{
			_leftmateria = rhs._leftmateria->clone();
			next = NULL;
		}
	return *this;
}

FloorNode::~FloorNode(void) //
{
	if (_leftmateria != NULL)
		delete _leftmateria;
}

#include "FloorNode.hpp"

FloorNode::FloorNode(AMateria* materia) : _leftmateria(materia), next(NULL) {}

FloorNode::FloorNode(void) : _leftmateria(NULL), next(NULL) {}

FloorNode::FloorNode(const FloorNode& instance)
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
	delete _leftmateria;
}

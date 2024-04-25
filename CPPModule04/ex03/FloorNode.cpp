#include "FloorNode.hpp"
#include <string>
//#include <ostream>

FloorNode(const AMateria& m) : _leftmateria(m), next(NULL) {}

FloorNode::FloorNode(void) {}

FloorNode::FloorNode(const FloorNode& instance)
{
	operator=(instance);
}

FloorNode& FloorNode::operator=(const FloorNode& rhs)
{
	if (this != &rhs)
		{
			_leftmateria = new AMateria(rhs->_leftmateria);
			next = NULL;
		}
	return *this;
}

FloorNode::~FloorNode(void) //
{
	delete _leftmateria;
}

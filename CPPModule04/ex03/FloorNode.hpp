#ifndef FLOORNODE_HPP
#define FLOORNODE_HPP
#include "AMateria.hpp"

class AMateria;
class FloorNode 
{
private:

public:
	AMateria* _leftmateria;
	FloorNode* next;
//Orthodox canonical begin
    FloorNode(void);
    FloorNode(AMateria* materia);
    FloorNode(const FloorNode& instance);
    FloorNode &operator=(const FloorNode& rhs);
    ~FloorNode(void);
//Orthodox canonical end
};
#endif // FLOORNODE_HPP

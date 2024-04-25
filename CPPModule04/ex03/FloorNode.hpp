#ifndef FLOORNODE_HPP
#define FLOORNODE_HPP
#include "AMateria.hpp"

class FloorNode 
{
private:
    FloorNode(void);

public:
	AMateria* _leftmateria;
	Node* next;
    //FloorNode(const std::string& arg); // In case you need to pass an  argument
//Orthodox canonical begin
    FloorNode(const AMateria& m);
    FloorNode(const FloorNode& instance);
    FloorNode &operator=(const FloorNode& rhs);
    ~FloorNode(void);
//Orthodox canonical end

    // Add your class members and methods here
};
#endif // FLOORNODE_HPP

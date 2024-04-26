#ifndef FLOORLIST_HPP
#define FLOORLIST_HPP
#include "FloorNode.hpp"
#include "ICharacter.hpp"

class Floornode;
class FloorList 
{
	private:
		FloorNode* _head;

	public:
		//Orthodox canonical begin
		FloorList(void);
		FloorList(const FloorList& instance);
		FloorList &operator=(const FloorList& rhs);
		~FloorList(void);
		//Orthodox canonical end
		void add(AMateria* materia);
		FloorNode* getNode() const;
		void printList() const;
};

#endif // FLOORLIST_HPP

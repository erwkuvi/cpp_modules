#ifndef FLOORLIST_HPP
#define FLOORLIST_HPP
#include <string>
#include "FloorNode.hpp"

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
		void add(const FloorNode& materia);
	
};


#endif // FLOORLIST_HPP

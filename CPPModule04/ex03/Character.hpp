#ifndef CHARACTER_HPP
#define CHARACTER_HPP
#include "ICharacter.hpp"
//#include "FloorNode.hpp"
#include "FloorList.hpp"
#include <string>

class Character : public ICharacter//, public FloorNode, public FloorNode
{
private:
	FloorList list;
public:
    Character(const std::string& name); 
//Orthodox canonical begin
    Character(void);
    Character(const Character& instance);
    Character &operator=(const Character& rhs);
    ~Character(void);
//Orthodox canonical end

    // Add your class members and methods here
		virtual const std::string& getName() const;
		virtual void equip(AMateria* m);
		virtual void unequip(AMateria* m);
		virtual void use (int idx, ICharacter& target); //pass the parameter to the AMateria::use function
};

std::ostream& operator<<(std::ostream& output, const Character& instance);

#endif // CHARACTER_HPP


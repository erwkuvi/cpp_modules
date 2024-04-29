#ifndef CHARACTER_HPP
#define CHARACTER_HPP
#include "ICharacter.hpp"
#include "FloorList.hpp"
#include <string>

class Character : public ICharacter
{
private:
	Character(void);
	FloorList _list;
public:
    Character(const std::string& name); 
//Orthodox canonical begin
    Character(const Character& instance);
    Character &operator=(const Character& rhs);
    ~Character(void);
//Orthodox canonical end

    // Add your class members and methods here
		virtual const std::string& getName() const;
		virtual void equip(AMateria* m);
		virtual void unequip(AMateria* m);
		virtual void use (int idx, ICharacter& target); //pass the parameter to the AMateria::use function
		virtual const FloorList& getList() const;
};

#endif // CHARACTER_HPP


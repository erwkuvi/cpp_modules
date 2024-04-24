#ifndef CHARACTER_HPP
#define CHARACTER_HPP
#include "ICharacter.hpp"
#include <string>

class Character : public ICharacter
{
private:
    Character(void);

public:
    Character(const std::string& name); 
//Orthodox canonical begin
    Character(const Character& instance);
    Character &operator=(const Character& rhs);
    ~Character(void);
//Orthodox canonical end

    // Add your class members and methods here
		virtual std::string const& getName() const;
		virtual void equip(AMateria* m);
		virtual void unequip(AMateria* m);
		virtual void use (int idx, ICharacter& target); //pass the parameter to the AMateria::use function
};

std::ostream& operator<<(std::ostream& output, const Character& instance);

#endif // CHARACTER_HPP


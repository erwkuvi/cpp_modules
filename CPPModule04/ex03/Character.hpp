#ifndef CHARACTER_HPP
#define CHARACTER_HPP
#include "ICharacter.hpp"
#include <string>

class Character : public ICharacter
{
private:

public:
    //Character(const std::string& arg); // In case you need to pass an  argument
//Orthodox canonical begin
    Character(void);
    Character(const Character& instance);
    Character &operator=(const Character& rhs);
    ~Character(void);
//Orthodox canonical end

    // Add your class members and methods here
		virtual std::string const& getName() const = 0;
		virtual void equip(AMateria* m) = 0;
		virtual void unquip(AMateria* m) = 0;
		virtual void use (int idx, ICharacter& target) = 0; //pass the parameter to the AMateria::use function
};

std::ostream& operator<<(std::ostream& output, const Character& instance);

#endif // CHARACTER_HPP


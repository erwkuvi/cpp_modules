#ifndef ICHARACTER_HPP
#define ICHARACTER_HPP
#include "AMateria.hpp"
#include <string>

class ICharacter {
private:
	//std::string _name;
	//AMateria* slot[4];

public:
    ICharacter(void);
    ICharacter(const std::string& name);
    ICharacter(const ICharacter& instance);
    ICharacter&operator=(const ICharacter& rhs);//createa deep copy
    virtual ~ICharacter(void);//Materias must be deleted when a Character is destroyed

		virtual std::string const& getName() const = 0;
		virtual void equip(AMateria* m) = 0;
		virtual void unquip(AMateria* m) = 0;
		virtual void use (int idx, ICharacter& target) = 0; //pass the parameter to the AMateria::use function
};

#endif // ICHARACTER_H


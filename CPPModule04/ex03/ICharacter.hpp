#ifndef ICHARACTER_HPP
#define ICHARACTER_HPP
#include "FloorList.hpp"
#include "AMateria.hpp"
#include <string>

class AMateria;
class FloorList;
class ICharacter {
	protected:
		std::string _name;
		AMateria* _slots[4];

	public:
		ICharacter(const std::string& name);
		ICharacter(void);
		ICharacter(const ICharacter& instance);
		ICharacter&operator=(const ICharacter& rhs);
		virtual ~ICharacter(void);

		virtual const std::string& getName() const = 0;
		virtual void equip(AMateria* m) = 0;
		virtual void unequip(AMateria* m) = 0;
		virtual void use (int idx, ICharacter& target) = 0; //pass the parameter to the AMateria::use function
		virtual const FloorList& getList() const = 0;
};

#endif // ICHARACTER_H


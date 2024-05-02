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

	public:
		ICharacter(const std::string& name);
		//Orthodox canonical form begin
		ICharacter(void);
		ICharacter(const ICharacter& instance);
		ICharacter&operator=(const ICharacter& rhs);
		virtual ~ICharacter(void);
		//Orthodox canonical form end

		virtual const std::string& getName() const = 0;
		virtual void equip(AMateria* m) = 0;
		virtual void unequip(int idx) = 0;
		virtual void use (int idx, ICharacter& target) = 0; 
		virtual const FloorList& getList() const = 0;
		virtual void printSlots() const = 0;
};

#endif // ICHARACTER_H


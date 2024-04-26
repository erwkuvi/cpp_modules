#ifndef AMATERIA_HPP
#define AMATERIA_HPP
#include "ICharacter.hpp"
#include <string>

class ICharacter; 
class AMateria {
protected:
	std::string _type;

public:
	AMateria(const std::string type);
	//Orthodox canonical
	AMateria(void);//Orthodox canonical
	AMateria(const AMateria& instance);
	AMateria&operator=(const AMateria& rhs);
	virtual ~AMateria(void);
	//Orthodox canonical

	std::string const & getType(void) const; // Returns the materia type
	virtual AMateria* clone(void) const = 0;
	virtual void use(ICharacter& target);
};

#endif // AMATERIA_HPP


#ifndef AMATERIA_HPP
#define AMATERIA_HPP
#include "ICharacter.hpp"
#include <string>
#define RESET	"\033[0m"
#define YELLOW	"\033[33m"
#define GREEN "\033[32m"
#define BLUE    "\033[34m"
#define MAGENTA "\033[35m"
#define RED     "\033[31m"

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


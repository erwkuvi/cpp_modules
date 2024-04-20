#ifndef AMATERIA_HPP
#define AMATERIA_HPP
//#include "ICharacter.hpp"
#include <string>

class AMateria {
	private:

	protected:
		std::string type;

public:
    AMateria(void);
    AMateria(const std::string& type);
    AMateria(const AMateria& instance);
    AMateria&operator=(const AMateria& rhs);
    ~AMateria(void);

		std::string const & getType() const; // Returns the materia type
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};


#endif // AMATERIA_H


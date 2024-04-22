#ifndef AMATERIA_HPP
#define AMATERIA_HPP
//#include "ICharacter.hpp"
#include <string>

class AMateria 
{
	private:
    AMateria(void);//Orthodox canonical

	protected:
		std::string _type;

	public:
    AMateria(const std::string type);
		//Orthodox canonical 
    AMateria(const AMateria& instance);
    AMateria&operator=(const AMateria& rhs);
    virtual ~AMateria(void);
		//Orthodox canonical 

		std::string const & getType() const; // Returns the materia type
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};


#endif // AMATERIA_H


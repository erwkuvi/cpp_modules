#ifndef ICE_HPP
#define ICE_HPP
#include "AMateria.hpp"
#include <string>

class Ice {
private:
    // Add your private members here

public:
    Ice(void);
    //Ice(const std::string& arg); // In case you need to pass an  argument
    Ice(const Ice& instance);
    Ice&operator=(const Ice& rhs);
    ~Ice(void);

		virtual AMateria* clone(const AMateria& instance);
		virtual void use(ICharacter& target);
};


#endif // ICE_H


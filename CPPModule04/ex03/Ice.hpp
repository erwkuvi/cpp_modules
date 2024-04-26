#ifndef ICE_HPP
#define ICE_HPP
#include "AMateria.hpp"
#include "ICharacter.hpp"

class Ice : public AMateria {
private:
    // Add your private members here

public:
	//Orthodox canonical
	Ice(void);
	Ice(const Ice& instance);
	Ice&operator=(const Ice& rhs);
	~Ice(void);
	//Orthodox canonical

	virtual AMateria* clone(void) const;//From AMateria.hpp
	virtual void use(ICharacter& target);//From AMateria.hpp
};


#endif // ICE_H


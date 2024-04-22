#ifndef CURE_HPP
#define CURE_HPP
#include "AMateria.hpp"

class Cure : public AMateria
{
private:
    // Add your private members here

public:
		//Orthodox canonical 
    Cure(void);
    Cure(const Cure& instance);
    Cure&operator=(const Cure& rhs);
    ~Cure(void);
		//Orthodox canonical 

		virtual AMateria* clone();//From AMateria.hpp
		virtual void use(ICharacter& target); //From AMateria.hpp
};


#endif // CURE_H



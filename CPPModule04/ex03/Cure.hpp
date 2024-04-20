#ifndef CURE_HPP
#define CURE_HPP
#include <string>
#include "AMateria.hpp"

class Cure {
private:
    // Add your private members here

public:
    Cure(void);
    //Cure(const std::string& arg); // In case you need to pass an  argument
    Cure(const Cure& instance);
    Cure&operator=(const Cure& rhs);
    ~Cure(void);

		virtual AMateria* clone(const AMateria& instance);
		virtual void use(ICharacter& target);
};


#endif // CURE_H


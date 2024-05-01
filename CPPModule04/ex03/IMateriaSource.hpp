#ifndef IMATERIASOURCE_HPP
#define IMATERIASOURCE_HPP
#include "AMateria.hpp"

//class AMateria;
class IMateriaSource 
{
private:
    // Add your private members here
public:
    IMateriaSource(void);
    //Orthodox canonical begin
    IMateriaSource(const IMateriaSource& instance);
    IMateriaSource &operator=(const IMateriaSource& rhs);
    virtual ~IMateriaSource(void);
    //Orthodox canonical end

		virtual void learnMateria(AMateria*) = 0;
		virtual AMateria* createMateria(std::string const& type) = 0;
};

 #endif // IMATERIASOURCE_H


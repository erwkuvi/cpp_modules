#ifndef IMATERIASOURCE_HPP
#define IMATERIASOURCE_HPP
#include "AMateria.hpp"
#include <string>

//class AMateria;
class IMateriaSource 
{
protected:
	AMateria* _materias[4];

public:
    IMateriaSource(void);
    //IMateriaSource(const std::string& arg); // In case you need to pass an  argument
    IMateriaSource(const IMateriaSource& instance);
    IMateriaSource &operator=(const IMateriaSource& rhs);
    virtual ~IMateriaSource(void);

		virtual void learnMateria(AMateria*) = 0;//copies the materia passed as a parameter and store it in memory so it can be cloned later
		virtual AMateria* createMateria(std::string const& type) = 0; //returns 0 if the type in unknown
};

 #endif // IMATERIASOURCE_H


#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP
#include "IMateriaSource.hpp"
#include "AMateria.hpp"
#include <string>

class MateriaSource : public IMateriaSource
{
protected:
	AMateria* _materias[4];

public:
    //Orthodox canonical begin
    MateriaSource(void);
    MateriaSource(const MateriaSource& instance);
    MateriaSource &operator=(const MateriaSource& rhs);
    ~MateriaSource(void);
    //Orthodox canonical end

    // Add your class members and methods here
		virtual void learnMateria(AMateria* materia);
		virtual AMateria* createMateria(const std::string& type);
};

#endif // MATERIASOURCE_H


#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP
#include "IMateriaSource.hpp"
#include <string>

class MateriaSource : public IMateriaSource
{
private:
    // Add your private members here

public:
    MateriaSource(void);
    //MateriaSource(const std::string& arg); // In case you need to pass an  argument
    MateriaSource(const MateriaSource& instance);
    MateriaSource &operator=(const MateriaSource& rhs);
    ~MateriaSource(void);

    // Add your class members and methods here
		virtual void learnMateria(AMateria* materia);
		virtual AMateria* createMateria(const std::string& type);
};

#endif // MATERIASOURCE_H


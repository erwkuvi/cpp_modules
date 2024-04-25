#include "MateriaSource.hpp"
#include <iostream>

MateriaSource::MateriaSource(void) : _materias[0](NULL)
{
	std::cout << "MateriaSource Default constructor called" << std::endl; 
}

MateriaSource::MateriaSource(const MateriaSource& instance)
{
	std::cout << "MateriaSource Copy constructor called" << std::endl; 
	operator=(instance);
}

MateriaSource& MateriaSource::operator=(const MateriaSource& rhs)
{
	if (this != &rhs)
		{
			//implementation of the copying
		}
	return *this;
}

MateriaSource::~MateriaSource(void) //
{
	std::cout << "MateriaSource Destructor called" << std::endl; 
}

void Materia::learnMateria(AMateria* materia)
{
	int i = 0;
	while (_materias[i++] && i < 4) {}
	if(materia && i < 4)
		_materias[i] = materia;
}

AMateria* createMateria(const std::string& type)
{
	for(int i = 0; i < 4; ++i)
	{
		if (_materias[i]->getType() == type)
			return _materias[i]->clone();
	}
	return 0;
}

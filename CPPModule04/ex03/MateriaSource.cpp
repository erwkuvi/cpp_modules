#include "MateriaSource.hpp"
#include "AMateria.hpp"
#include "IMateriaSource.hpp"
#include <iostream>

MateriaSource::MateriaSource(void) : IMateriaSource()
{
	std::cout << "MateriaSource Default constructor called" << std::endl; 
}

MateriaSource::MateriaSource(const MateriaSource& instance) : IMateriaSource(instance) 
{
	std::cout << "MateriaSource Copy constructor called" << std::endl; 
	operator=(instance);
}

MateriaSource& MateriaSource::operator=(const MateriaSource& rhs)
{
	if (this != &rhs)
	{
		IMateriaSource::operator= (rhs);
	}
	return *this;
}

MateriaSource::~MateriaSource(void) //
{
	std::cout << "MateriaSource Destructor called" << std::endl; 
}

void MateriaSource::learnMateria(AMateria* materia)
{
	int i = 0;
	while (_materias[i] && i < 4) {i++;}
	if(materia && i < 4)
		_materias[i] = materia;
}

AMateria* MateriaSource::createMateria(const std::string& type)
{
	for(int i = 0; i < 4; ++i)
	{
		if (_materias[i]->getType() == type) 
			return _materias[i]->clone();
	}
	return 0;
}

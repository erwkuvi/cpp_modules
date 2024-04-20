#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP
#include <string>

class MateriaSource {
private:
    // Add your private members here

public:
    MateriaSource(void);
    //MateriaSource(const std::string& arg); // In case you need to pass an  argument
    MateriaSource(const MateriaSource& instance);
    MateriaSource &operator=(const MateriaSource& rhs);
    ~MateriaSource(void);

    // Add your class members and methods here
};

std::ostream& operator<<(std::ostream& output, const MateriaSource& instance);

#endif // MATERIASOURCE_H


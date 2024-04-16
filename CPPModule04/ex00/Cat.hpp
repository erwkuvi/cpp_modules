#ifndef CAT_HPP
#define CAT_HPP
#include <string>
#include "Animal.hpp"

class Cat : public Animal
{
protected:
	std::string type;

public:
	Cat(void);
	Cat(const Cat& instance);
	Cat& operator=(const Cat& rhs);
	~Cat(void);
};

#endif // !CAT_HPP

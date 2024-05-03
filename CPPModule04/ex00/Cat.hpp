#ifndef CAT_HPP
#define CAT_HPP
#include "Animal.hpp"

class Cat : public Animal
{

	public:
		Cat(void);
		//Cat(const std::string& type);
		Cat(const Cat& instance);
		Cat& operator=(const Cat& rhs);
		~Cat(void);
		virtual void makeSound() const;
};
std::ostream& operator<<(std::ostream& output, const Cat& rhs);
#endif // !CAT_HPP

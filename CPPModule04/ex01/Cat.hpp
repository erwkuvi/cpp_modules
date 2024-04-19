#ifndef CAT_HPP
#define CAT_HPP
#include "Brain.hpp"
#include "Animal.hpp"

class Cat : public Animal
{
	Brain* _brain;

	public:
		Cat(void);
		//Cat(const std::string& type);
		Cat(const Cat& instance);
		Cat& operator=(const Cat& rhs);
		~Cat(void);
		void makeSound() const;
};
#endif // !CAT_HPP

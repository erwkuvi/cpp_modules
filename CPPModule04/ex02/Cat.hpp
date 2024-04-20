#ifndef CAT_HPP
#define CAT_HPP
#include "A_Animal.hpp"
#include "Brain.hpp"
//#include "Animal.hpp"

class Cat : public A_Animal
{
	Brain* _brain;

	public:
		Cat(void);
		//Cat(const std::string& type);
		Cat(const Cat& instance);
		Cat& operator=(const Cat& rhs);
		~Cat(void);
		virtual void makeSound() const;
};
#endif // !CAT_HPP

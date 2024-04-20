#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	
	public:
		WrongCat(void);
		//WrongCat(const std::string& type);
		WrongCat(const WrongCat& instance);
		WrongCat& operator=(const WrongCat& rhs);
		~WrongCat(void);
		void makeSound() const;
};
std::ostream& operator<<(std::ostream& output, const WrongCat& rhs);

#endif // !WRONGCAT_HPP

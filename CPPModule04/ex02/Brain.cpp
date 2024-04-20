#include  "Brain.hpp"
#include <iostream>

Brain::Brain(void)
{
	std::cout << "Brainsssssssss Default Constructor called" << std::endl;
}
Brain::Brain(const Brain& instance)
{
	std::cout << "Brainsssssssss Copy Constructor called" << std::endl;
	operator=(instance);
}

Brain& Brain::operator=(const Brain& rhs)
{
	if(this!= &rhs)
	{
		for(int i = 0; i < 100; ++i)
			this->ideas[i] = rhs.ideas[i];
	}
	return *this;
}

Brain::~Brain(void)
{
	std::cout << "Brainsssssssss Destructor called" << std::endl;
}




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

void Brain::setIdea(int idx, std::string idea)
{
	if (idx > 99 || idx < 0)
	{
		std::cout << RED << "Idea out of range" << RESET << std::endl;
	}
	else
		ideas[idx] = idea;
}

void Brain::printIdeas() const
{
	int j = 0;
	for(int i = 0; i < 100; i++)
	{
		if(ideas[i].size())
		{
			j = 1;
			std::cout << MAGENTA << "Idea " << i << ": " << ideas[i] << RESET << std::endl;
		}
	}
	if (!j)
		std::cout << RED << "No ideas in this animal" << RESET << std::endl;
}



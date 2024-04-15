#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP
#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
	protected:
	FragTrap(void);

	public:
	FragTrap(std::string name);
	FragTrap(std::string name, int hp, int ep, int ad);
	FragTrap(const FragTrap& instance);
	FragTrap& operator=(const FragTrap& rhs);
	~FragTrap(void);

	void attack(const std::string& target);
	void highFives(void);
};

#endif

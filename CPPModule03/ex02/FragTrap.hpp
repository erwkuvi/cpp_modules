#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	FragTrap(void);

	public:
	FragTrap(std::string name);
	FragTrap(const FragTrap& instance);
	FragTrap& operator=(const FragTrap& rhs);
	~FragTrap(void);

	void attack(const std::string& target);
	void highFives(void);
};

#endif

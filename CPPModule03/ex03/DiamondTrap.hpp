#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <string>

class DiamondTrap : virtual public FragTrap, virtual public ScavTrap
{
	DiamondTrap(void);
	std::string _name;

	public:
	DiamondTrap(std::string name);
	DiamondTrap(const DiamondTrap& rhs);
	DiamondTrap& operator=( const DiamondTrap& rhs);
	~DiamondTrap(void);
	void whoAmI(void);
	void attack(const std::string& target);
};

#endif // !DIAMONDTRAP_HPP

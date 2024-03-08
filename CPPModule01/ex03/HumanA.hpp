#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"
#include <string>

class HumanA
{
	private:

	Weapon _weaponA;
	std::string _name;

	public:
	HumanA(std::string humanAName, std::string humanAWeapon);
	~HumanA(void);

	void attack(void);

};

#endif // HUMANA_HPP

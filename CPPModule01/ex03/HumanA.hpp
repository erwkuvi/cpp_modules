#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"
#include <string>

class HumanA
{
	private:

	Weapon& _weaponA;
	std::string _name;

	public:
	HumanA(std::string humanAName, Weapon& humanAWeapon);
	~HumanA(void);

	void attack(void) const;

};

#endif // HUMANA_HPP

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"
#include <string>


class HumanB
{
	private:

	const Weapon* _weaponB;	
	std::string _name;

	public:
	
	HumanB(std::string humanBName);
	~HumanB(void);

	void setWeapon(const Weapon& newWeapon);
	void attack(void) const;
};

#endif // HUMANB_HPP

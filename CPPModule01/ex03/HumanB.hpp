#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"
# include <string>

class HumanB
{
	private:

	Weapon* _weaponB;	
	std::string _name;

	public:
	
	HumanB(std::string humanBName);
	~HumanB(void);

	void setWeapon(Weapon& newWeapon);
	void attack(void);
};

#endif // HUMANB_HPP

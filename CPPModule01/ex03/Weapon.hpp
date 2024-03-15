#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>

class Weapon
{
	private:
	std::string _type;
		
	public:
	Weapon(std::string initialType);
	~Weapon(void);

	const	std::string& getType(void) const;
	void setType(const std::string& newType);

};

#endif // !WEAPON_HPP

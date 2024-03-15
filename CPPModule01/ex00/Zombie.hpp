#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>

class Zombie
{
private:
	std::string _name;

public:
	Zombie(std::string name);
	~Zombie(void);

	void		announce(void) const;
	Zombie*		newZombie(std::string name);
	void		randomChump(std::string name);
	std::string	getName(void) const;
	void		setName(std::string name);

};

#endif // ZOMBIE_HPP

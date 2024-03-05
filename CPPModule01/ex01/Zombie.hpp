#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <string>
//# include <iostream>

class Zombie
{
private:
	std::string _name;

public:
	Zombie(std::string name);
	~Zombie(void);

	void		announce(void) const;
	Zombie*		zombieHorde(int N, std::string name);
	Zombie*		newZombie(std::string name);
	std::string	getName(void) const;
	void		setName(std::string name);

};


#endif


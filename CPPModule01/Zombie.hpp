#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <string>

class Zombie
{
public:
	Zombie(/* args */);
	~Zombie();

	void		announce(void);
	Zombie*		newZombie(std::string name);
	void		randomChump(std::string name);
	std::string	getName(void) const;
	void		setName(std::string name);
private:
	std::string _name;

};


#endif


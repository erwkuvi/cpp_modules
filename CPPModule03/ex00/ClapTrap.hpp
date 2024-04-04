#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#define RESET	"\033[0m"
#define YELLOW	"\033[33m"
#define BLUE    "\033[34m"
#define MAGENTA "\033[35m"
#define RED     "\033[31m"
#include <string>
#include <iostream>

class ClapTrap{

private:
	std::string _name;
	unsigned int _hitPoints; //health of the ClapTrap
	unsigned int _energyPoints;
	unsigned int _attackDamage;

public:
	ClapTrap(std::string name); 
	~ClapTrap(void); 

	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

	//PRINTING INFOS
	unsigned int getter(std::string prop) const;
};

std::ostream& operator<<(std::ostream& output, const ClapTrap& instance);
#endif // !CLAPTRAP_HPP

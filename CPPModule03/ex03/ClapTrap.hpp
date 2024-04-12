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
		ClapTrap(void);

	protected:
		std::string _name;
		unsigned int _hitPoints; //health of the ClapTrap
		unsigned int _energyPoints;
		unsigned int _attackDamage;

	public:
		ClapTrap(std::string name); 
		ClapTrap(const ClapTrap& instance); 
		ClapTrap(std::string name, int hp, int ep, int ad);
		ClapTrap &operator=(const ClapTrap& rhs);
		virtual ~ClapTrap(void); 

		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

		//EXTRA GETTERS & SETTERS
		std::string namegetter(void) const;
		unsigned int getter(std::string prop) const;
		void setDamagePowerUp(int amount);
};

std::ostream& operator<<(std::ostream& output, const ClapTrap& instance);
#endif // !CLAPTRAP_HPP

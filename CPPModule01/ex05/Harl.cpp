#include "Harl.hpp"
#include <iostream>
#include <string>

Harl::Harl() {}

Harl::~Harl() {}

void Harl::_debug(void) 
{
	std::cout << "[DEBUG] I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-xketchup burger. I really do!" << std::endl;
}

void Harl::_info(void) 
{
	std::cout << "[INFO] I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::_warning(void) 
{
	std::cout << "[WARNING] I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::_error(void)  
{
	std::cout << "[ERROR] This is unacceptable! I want to speak to the manager now." << std::endl;
}


void Harl::complain(std::string level)
{
	void (Harl::*ptr[4])(void) = {&Harl::_debug, &Harl::_info, &Harl::_warning, &Harl::_error};
	std::string levelarr[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	int i = 0;
	while (level != levelarr[i] && i < 4) 
		i++;
	if (i == 4)
	{
		std::cerr << "Error: the level given does not match with any result" << std::endl;
		return;
	}
	(this->*ptr[i])();
}

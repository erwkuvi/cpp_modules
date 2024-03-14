#include "Harl.hpp"
#include <iostream>

Harl::Harl() {}

Harl::~Harl() {}

void Harl::_debug(void) const
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-xketchup burger. I really do!" << std::endl;
}

void Harl::_info(void) const
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::_warning(void) const
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::_error(void) const 
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}


void Harl::complain(std::string level)
{
	if(level == "DEBUG")
		this->_debug();
	if(level == "INFO")
		this->_info();
	if(level == "WARNING")
		this->_warning();
	if(level == "ERROR")
		this->_error();

}

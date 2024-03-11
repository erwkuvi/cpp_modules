#include "SedIsForLosers.hpp"


Sed::Sed(std::string filename) : _infile(filename)
{ 
	_outfile = _infile + ".ft_replace";
}

Sed::~Sed(void)
{
	std::cout << "Destructor called" << std::endl;
}

void Sed::ft_replace(std::string oldword, std::string newword)
{

}

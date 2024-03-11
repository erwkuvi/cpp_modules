#ifndef SEDISFORLOSERS_HPP
# define SEDISFORLOSERS_HPP
# include <string>
# include <iostream>
# include <fstream>

class Sed
{
private:
	std::string _infile;
	std::string _outfile;

public:
	Sed(std::string filename);
	~Sed(void);
	void ft_replace(std::string oldword, std::string newword);
};

#endif


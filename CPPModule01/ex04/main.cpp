#include <fstream>
#include <iostream>
#include <string>

int execute_sed(std::string filename, std::string oldword, std::string newword)
{
	std::fstream infile;
	std::fstream outfile;
	std::string  line;
	std::size_t found;
	std::string tmp;
	int pos;

	infile.open(filename, std::ios::in);
	if(!infile.is_open())
	{
		std::cerr << "Error: filename not opened" << std::endl;
		return 1;
	}
	outfile.open(filename + ".replace", std::ios::out);
	while (getline(infile, line))
	{
		pos = 0;
		while ((found = line.find(oldword, pos)) != std::string::npos)
		{
			tmp = line.substr(found + oldword.length());
			line.erase(found, std::string::npos);
			line += newword + tmp;
			pos = found + newword.length();
		}
		outfile << line << std::endl;
	}
	infile.close();
	outfile.close();
	return 0;
}
 
int main(int argc, char **argv)
{
	if (argc != 4) 
	{
		std::cerr << "Error: wrong number of parameters, only 3 accepted" << std::endl;
		return 1;
	}
	for (int i = 1; i < 4; i++) 
	{
		std::string checker = argv[i];
		if (checker.empty()) 
		{
			std::cerr << "Error: parameters cannot be empty" << std::endl;
			return 1;
		}
	}
	if(execute_sed(argv[1], argv[2], argv[3]))
		return 1;
	return 0; 
}

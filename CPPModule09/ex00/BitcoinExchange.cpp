#include "BitcoinExchange.hpp"
#include <stdexcept>
#include <string>
#include <iostream>

BitcoinExchange::BitcoinExchange(void) //: _init(some)
{
	std::cout << "BitcoinExchange Default constructor called" << std::endl; 
}

BitcoinExchange::BitcoinExchange(const std::string& inFile)
{
	//if (inValue < 0 || inValue > 1000)
	//	throw std::runtime_error("Error: value provided not in range");

	std::fstream fd;
	fd.open (inFile, std::fstream::in);
	if(fd.is_open())
	{
		std::cout << "file opened succesfully!" << std::endl;
		if(fd.peek() != EOF)
		{
			std::string line;
			while(std::getline(fd, line))
				std::cout << line << std::endl;
		}
		else
			std::runtime_error("Error: file seems to be empty");
		fd.close();
	}
	else
		std::runtime_error("Error: could not open file");
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& instance)
{
	std::cout << "BitcoinExchange Copy constructor called" << std::endl; 
	operator=(instance);
}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& rhs)
{
	if (this != &rhs)
		{
			//implementation of the copying
		}
	return *this;
}

BitcoinExchange::~BitcoinExchange(void) //
{
	std::cout << "BitcoinExchange Destructor called" << std::endl; 
}

	//Further members implementations ..




	//output operator overload ..

std::ostream& operator<<(std::ostream& output, const BitcoinExchange& rhs)
{
	output << // implemetation <<;
	return output;
}


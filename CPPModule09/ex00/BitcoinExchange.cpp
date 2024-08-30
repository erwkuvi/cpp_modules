#include "BitcoinExchange.hpp"
#include <cctype>
#include <stdexcept>
#include <string>
#include <iostream>

BitcoinExchange::BitcoinExchange(void) {}

bool BitcoinExchange::_isDateValid(std::string& date)
{
	if (date.size() > 10)
	{
		std::cout << "hello" << std::endl;
		return false;
	}
	int year = std::stoi(date.substr(0, 4));
	int month = std::stoi(date.substr(5, 6));
	int day = std::stoi(date.substr(8, 9));
	std::cout << year << std::endl;
	std::cout << month << std::endl;
	std::cout << day << std::endl;
	return true;
}

bool dataFormatCheck(std::string line)
{
    if (line.find(',') == std::string::npos) 
        return false;
    if (line.find('-') == std::string::npos)
        return false;
    return true;
}

std::string& removeSpace(std::string& str)
{
	for (std::string::iterator it = str.begin(); it != str.end();) 
	{
		if (std::isspace(*it)) 
			it = str.erase(it); // Remove the whitespace character
		else 
			++it;
	}
	 return str;
}


BitcoinExchange::BitcoinExchange(const std::string& inFile)
{
	//if (inValue < 0 || inValue > 1000)
	//	throw std::runtime_error("Error: value provided not in range");
	_store_data();
	std::string test("2009-10-23");
	_isDateValid(test);
	//test = removeSpace(test);
	//std::cout << test << std::endl;

	std::fstream fd;
	fd.open (inFile, std::fstream::in);
	if(fd.is_open())
	{
		//std::cout << "file opened succesfully!" << std::endl;
		if(fd.peek() != EOF)
		{
			std::string line;
			line = removeSpace(line);
			//while(std::getline(fd, line))
				//std::cout << line << std::endl;
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

BitcoinExchange::~BitcoinExchange(void) {}

	//Further members implementations ..

void BitcoinExchange::_printDatabase()
{
	std::cout << "from Database" << std::endl;
	std::map<std::string, float>::const_iterator it = _database.begin();
	std::map<std::string, float>::const_iterator ite = _database.end();
	while(it != ite)
	{
		std::cout << it->first << "\t|\t";
		std::cout << it->second << std::endl;
		*it++;
	}
}

void BitcoinExchange::_store_data()
{
	std::fstream fd;
	fd.open ("dataa.csv", std::fstream::in);
	if(fd.is_open())
	{
		std::cout << "Data found!" << std::endl;
		if(fd.peek() != EOF)
		{
			std::string line;
			std::string::size_type n;
			char* end;
			while(std::getline(fd, line))
			{
				if(dataFormatCheck(line))
				{
					n = line.find(',');
					_database[line.substr(0, n)] = std::strtof(line.substr(n + 1).c_str(), &end);
					//std::cout << "(1):\t" << line.substr(0, n) << "\t|\t";
					//std::cout << "(2):\t" << std::strtof(line.substr(n + 1).c_str(), &end) << std::endl;
				}
			}
		}
		else
			std::runtime_error("Error: data seems to be empty");
		fd.close();
	}
	else
		std::runtime_error("Error: could not open/find data file");
	_printDatabase();
}

#include <cctype>
#include "BitcoinExchange.hpp"
#include <fstream>
#include <stdexcept>
#include <string>
#include <iostream>
#include <ctime>


BitcoinExchange::BitcoinExchange(void) {}

bool isLeapYear(int year) 
{
	if (year % 400 == 0) {
		return true;
	} else if (year % 100 == 0) {
		return false;
	} else if (year % 4 == 0) {
		return true;
	} else {
		return false;  
	}
}

int BitcoinExchange::_isDataValid(std::string& date, std::string value)
{
	int errorType = _isDateValid(date);
	//std::cout << "value of date: " << errorType << std::endl;
	if (errorType == -1)
		errorType = _isValueValid(value);
	return errorType;
}

int BitcoinExchange::_isValueValid(std::string& value)
{
	int p = 0;
	for(size_t i = 0; i < value.size(); i++)
	{
		if(!isdigit(value[i]) && value[i] != '.' && value[i] != '-')
			return NOTDIG;
		if (value[i] == '.')
			p++;
		if (p > 1)
			return NOTDIG;
	}
	float val = std::strtof(value.c_str(), NULL);
	if(val > 1000)
		return TOOLAR;
	if(val < 0)
		return NOTPOS;
	return -1;
}

int BitcoinExchange::_isDateValid(std::string& date)
{
	if (date.size() > 10)
		return BADINP;

	int year = std::stoi(date.substr(0, 4));
	int month = std::stoi(date.substr(5, 6));
	int day = std::stoi(date.substr(8, 9));
	//std::cout << year << std::endl;
	//std::cout << std::endl;
	//std::cout << month << std::endl;
	//std::cout << std::endl;
	//std::cout << day << std::endl;
	//std::cout << std::endl;
	int longMonth[] = {1,3,5,7,8,10,12}; 
	int i = 0;

	while (month != longMonth[i] && i < 7)
		i++;
	if(year < 2009 || year > 2024)
		return BADINP;
	if(month < 1 || month > 12)
		return BADINP;
	if(day < 1 || day > 31)
		return BADINP;
	if(i == 7 && day == 31)
		return BADINP;
	if (!isLeapYear(year) && day == 29)
		return BADINP;

	time_t now = time(0);
	tm* ltm= localtime(&now);
	if(year == 1900 + ltm->tm_year && month == 1 + ltm->tm_mon && day > ltm->tm_mday)
		return BADINP;
	return -1;
}

bool dataFormatCheck(std::string line, bool database)
{
    if (line.find(',') == std::string::npos && database == true) 
        return false;
    if (line.find('|') == std::string::npos && database == false) 
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
	_store_data();
	//std::string test("        2025-09-02   ");
	//test = removeSpace(test);
	//std::cout << "is date valid: " << _isDateValid(test) << std::endl; 
	std::fstream fd;
	fd.open (inFile, std::fstream::in);
	if(fd.is_open())
	{
		//std::cout << "file opened succesfully!" << std::endl;
		if(fd.peek() != EOF)
			_storeInFile(fd);
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

void BitcoinExchange::_printDatabase(std::list<_myList> database) const
{
	std::cout << "from Database" << std::endl;
	std::list<_myList>::const_iterator it = database.begin();
	std::list<_myList>::const_iterator ite = database.end();
	while(it != ite)
	{
		std::cout << it->_key << "\t|\t";
		std::cout << it->_value << std::endl;
		it++;
	}
}

void BitcoinExchange::_store_data()
{
	std::fstream fd;
	fd.open ("data.csv", std::fstream::in);
	if(fd.is_open())
	{
		//std::cout << "Data found!" << std::endl;
		if(fd.peek() != EOF)
		{
			std::string line;
			std::string::size_type n;
			while(std::getline(fd, line))
			{
				if(dataFormatCheck(line, true))
				{
					n = line.find(',');
					_database.push_back({line.substr(0, n),std::strtof(line.substr(n + 1).c_str(), NULL)});
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
	//_printDatabase(_database);
}


void BitcoinExchange::_storeInFile(std::fstream& fd)
{
	int errorType;
	std::string line;
	std::string::size_type n;
	std::string date;
	float value;
	while(std::getline(fd, line))
	{
		line = removeSpace(line);
		errorType = dataFormatCheck(line, false);
		if (errorType)
		{
			n = line.find('|');
			date = line.substr(0, n);
			value = std::strtof(line.substr(n + 1).c_str(), NULL);
			errorType = _isDataValid(date, line.substr(n + 1));
		}
		else
			date = line;
		if (errorType == -1)
			_inFile.push_back({date, value});
		else
			_inFile.push_back({date, static_cast<float>(errorType) + ERRORNUM});
		//std::cout << _inFile. << "\n" << std::endl;
		//std::cout << "errorType: " << errorType << std::endl;
	}
	//std::cout << "\ninFile size: " << _inFile.size() << std::endl;
	//_printDatabase(_inFile);
}

bool BitcoinExchange::myList::operator<(const _myList& other) const
 {
	 return _key < other._key;
 }


float BitcoinExchange::_searchNearestNode(std::string date) const
{
	std::list<_myList>::const_iterator it = _database.begin();
	std::list<_myList>::const_iterator ite = _database.end();
	std::list<_myList>::const_iterator tmpit = _database.begin();
	//float res = it->_value;
	while (it != ite)
	{
		if(it->_key == date)
			return it->_value;
		if(it->_key > date && it == _database.begin())
			return it->_value;
		if(it->_key > date && it != _database.begin())
		{
			tmpit = it;
			--tmpit;
			break;
		}
		if(it->_key < date && tmpit->_key < it->_key)
			tmpit = it;
		++it;
	}
	return tmpit->_value;
}

void BitcoinExchange::_printError(std::string list, int error) const
{
	int errSwitch = error - ERRORNUM;
	switch (errSwitch) 
	{
		case (BADINP):
			std::cout << "Error: Bad input => " << list << std::endl;
			break;
		case (NOTPOS):
			std::cout << "Error: Not a positive number." << std::endl;
			break;
		case (TOOLAR):
			std::cout << "Error: Too large a number." << std::endl;
			break;
		case (NOTDIG):
			std::cout << "Error: Not a valid number." << std::endl;
			break;
		default:
			std::cout << "Error: Bad input => " << std::endl;
			break;
	}
}

void BitcoinExchange::outputvalue() const
{
	//int i = 0;
	
	std::list<_myList>::const_iterator it = _inFile.begin();
	std::list<_myList>::const_iterator ite = _inFile.end();
	while(it != ite)
	{
		if(it->_value > 1000)
			_printError(it->_key, it->_value);
		else
		{
			float result = it->_value * _searchNearestNode(it->_key);
			//std::cout << "infile value: " << it->_value << " | nearest value: " << _searchNearestNode(it->_key) << std::endl;
			if(result - static_cast<int>(result) != 0)
				std::cout << it->_key << " => " << it->_value << " = " << std::fixed << std::setprecision(2) << result << std::endl;
			else
				std::cout << it->_key << " => " << it->_value << " = " << static_cast<int>(result) << std::endl;
		}
		++it;
	}
}



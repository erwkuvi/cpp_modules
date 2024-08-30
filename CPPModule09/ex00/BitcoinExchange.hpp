#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP
#include <string>
#include <cstdio>
#include <fstream>
#include <cstdlib>
#include <map>

class BitcoinExchange 
{
private:
	//float _value;
	//std::string _date;
	std::map<std::string, float> _database;
	std::map<std::string, float> _inFile;//maybe I dont need this.
	BitcoinExchange(void);
	void _store_data();
	void _printDatabase();
	bool _isDateValid(std::string& date);


public:
    BitcoinExchange(const std::string& inFile);
    BitcoinExchange(const BitcoinExchange& instance);
    BitcoinExchange &operator=(const BitcoinExchange& rhs);
    ~BitcoinExchange(void);
};
#endif // BITCOINEXCHANGE_HPP

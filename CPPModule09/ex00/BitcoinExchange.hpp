#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP
#include <string>
#include <cstdio>
#include <fstream>
#include <cstdlib>

class BitcoinExchange 
{
private:
	float _value;
	std::string _date;
    // Add your private members here

public:
    BitcoinExchange(const std::string& inFile);

    BitcoinExchange(void);
    BitcoinExchange(const BitcoinExchange& instance);
    BitcoinExchange &operator=(const BitcoinExchange& rhs);
    ~BitcoinExchange(void);

};

#endif // BITCOINEXCHANGE_HPP

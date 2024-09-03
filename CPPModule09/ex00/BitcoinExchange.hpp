#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP
#include <iomanip>
#include <string>
#include <cstdio>
#include <fstream>
#include <cstdlib>
#include <list>
#define ERRORNUM 1001

class BitcoinExchange 
{
private:
	typedef struct myList
	{
		std::string _key;
		float 			_value;
	} _myList;

	enum _errorType
	{
		BADINP, NOTPOS, TOOLAR, NOTDIG
	};
	std::list<_myList> _database;
	std::list<_myList> _inFile;//maybe I dont need this.
	BitcoinExchange(void);
	void _store_data();
	void _storeInFile(std::fstream& fd);
	void _printDatabase(std::list<_myList> database) const;
	int _isDateValid(std::string& date);
	int _isValueValid(std::string& value);
	int _isDataValid(std::string& date, std::string value);
	float _searchNearestNode(std::string date) const;
	void _printError(std::string list, int error) const;


public:
    BitcoinExchange(const std::string& inFile);
    BitcoinExchange(const BitcoinExchange& instance);
    BitcoinExchange &operator=(const BitcoinExchange& rhs);
    ~BitcoinExchange(void);
		void outputvalue() const;


};
#endif // BITCOINEXCHANGE_HPP

#include "PmergeMe.hpp"
#include <sstream>
#include <stdexcept>

void printMap(const std::map<std::string, int>& map) 
{
	std::map<std::string, int>::const_iterator it;
	for(it = map.begin(); it != map.end(); ++it) 
	{
		std::cout << "Key: " << it->first << " Value: " << it->second << std::endl;
	}
}

PmergeMe::PmergeMe(void) {}

std::map<std::string, int> PmergeMe::_conv2Map(int* array, int arrSize)
{
	std::map<std::string, int> newMap;
	int j = 1;
	for(int i = 0; i < arrSize - 1; i += 2)
	{
		//{12 1 32 14 5 9 88}
		std::stringstream ssA;
		std::stringstream ssB;
		ssA << "a" << j;
		ssB << "b" << j;
		newMap[ssA.str()] = array[i];
		newMap[ssB.str()] = array[i + 1];
		j++;
	}
	if(arrSize % 2 != 0)
	{
		std::stringstream ssC;
		ssC << "b" << arrSize / 2 + 1;
		newMap[ssC.str()] = array[arrSize - 1];
	}
	//printMap(newMap);
	return newMap;
}

PmergeMe::PmergeMe(int* array, int arrSize) 
{
	std::cout << "It's a Map" << std::endl;
	_mSequence = _conv2Map(array, arrSize);
	//printMap(_mSequence);
	_mfordJohnsonSort(_mSequence);
	(void)array;
}

PmergeMe::PmergeMe(std::vector<int>& arr) : _sequence(arr)
{
	std::cout << "It's a Vector" << std::endl;
	_fordJohnsonSort(_sequence);
}

PmergeMe::PmergeMe(const PmergeMe& instance)
{
	operator=(instance);
}

PmergeMe& PmergeMe::operator=(const PmergeMe& rhs)
{
	if (this != &rhs)
		{
			//implementation of the copying
		}
	return *this;
}

PmergeMe::~PmergeMe(void) {}

void printVector(const std::vector<int> list)
{
	std::vector<int>::const_iterator it;
	std::cout << "List size: " << list.size() << std::endl;

	for (it = list.begin(); it != list.end(); it++)
	{
		std::cout << "List: " << *it << std::endl;
	}
}


void PmergeMe::_mfordJohnsonSort(std::map<std::string, int>& map)
{
	if (map.size() <= 1) return;
	std::map<std::string, int> masterChain;

	std::cout << "map print: " << map.size() << std::endl;
	printMap(map);
	int j = 1;
	for (size_t i = 0; i < map.size() / 2 - 1; i++) 
	{
		//{12 1 32 14 5 9 88}
		std::stringstream ssA;
		std::stringstream ssNext;
		std::stringstream ssOG;

		ssA << "a" << j;
		ssNext << "a" << j + 1;
		if (map[ssA.str()] < map[ssNext.str()]) 
		{
			std::cout << "swap" << std::endl;
			std::swap(map[ssA.str()], map[ssNext.str()]);
		}
		masterChain[ssA.str()] = map[ssA.str()];
		if(!masterChain[ssA.str()])
			throw std::runtime_error("Something bad happened :(");
		j += 2;
	}
	std::cout << "FJSort" << std::endl;
	printMap(masterChain);
	_mfordJohnsonSort(masterChain);
	j = 1;
	for(size_t i = 0; i < map.size() / 2 - 1; i += 2)
	{
		std::stringstream ssB;
		std::stringstream ssNextB;
		ssB << "b" << j;
		ssNextB << "b" << j + 1;
		masterChain[ssA.str()] = map[ssA.str()];
		
		j++;
	}
	//_mfordJohnsonInsert(masterChain);

	if (map.size() % 2 != 0) 
	{
		std::stringstream ss;
		ss << "b" << map.size() / 2 + 1;
		//int standalone = map[ss.str()];
		//_mbinaryInsert(mainChain, static_cast<int>(mainChain.size()) - 1, standalone);
	}
	map = masterChain;
}

void PmergeMe::_fordJohnsonSort(std::vector<int>& arr)
{
	if (arr.size() <= 1) return;
	std::vector<int> mainChain;
	std::vector<int> pends;
	int standalone;
	bool hasStandalone = false;

	for (size_t i = 0; i < arr.size() - 1; i += 2) 
	{
		if (arr[i] < arr[i + 1]) 
			std::swap(arr[i], arr[i + 1]);

		mainChain.push_back(arr[i]);
		pends.push_back(arr[i + 1]);
	}
	std::cout << "1MainChain: " << std::endl;
	printVector(mainChain);	
	std::cout << "1Pends: " << std::endl;
	printVector(pends);	
	if (arr.size() % 2 != 0) 
	{
		standalone = arr[arr.size() - 1];
		hasStandalone = true;
	}

	_fordJohnsonSort(mainChain);

	_fordJohnsonInsert(mainChain, pends);

	if (hasStandalone)
		_binaryInsert(mainChain, static_cast<int>(mainChain.size()) - 1, standalone);

	arr = mainChain;
}


void PmergeMe::_fordJohnsonInsert(std::vector<int>& mainChain, const std::vector<int>& pends) 
{
	if (pends.empty()) return;
	//std::cout << "2Pends: " << std::endl;
	//printVector(pends);	

	//mainChain.insert(mainChain.begin(), pends[0]);

	int j = 0;
	int k = 3;
	while (k < static_cast<int>(pends.size())) 
	{
		for (int i = k - 1; i >= j; --i) 
			_binaryInsert(mainChain, k, pends[i]);
		j = k;
		k = _jacobsthal(++k);
	}
	for (int i = static_cast<int>(pends.size()) - 1; i >= j; --i) 
		_binaryInsert(mainChain, static_cast<int>(mainChain.size()) - 1, pends[i]);
}


void PmergeMe::_binaryInsert(std::vector<int>& mainChain, int right, const int& pendvalue) 
{
	int left = 0;
	while (left <= right) 
	{
		int mid = left + (right - left) / 2;
		if (mainChain[mid] < pendvalue) 
			left = mid + 1;
		else 
			right = mid - 1;
	}
	mainChain.insert(mainChain.begin() + left, pendvalue);
}

int PmergeMe::_jacobsthal(int n) 
{
	if (n == 0) return 0;
	if (n == 1) return 1;
	//J(n) = J(n-1) 	+ 	2J(n-2)
	//J(2) = 1 				+ 	0 		= 1
	//J(3) = 2 				+ 	1 		= 3
	//J(4) = 3 				+ 	2 		= 5
	//J(5) = 5 				+ 	6 		= 11
	
	int c = _jacobsthal(n - 1) + (2 * _jacobsthal(n - 2));
	//std::cout << c << std::endl;
	return c;
}

const std::vector<int>& PmergeMe::getSequence()const {return _sequence;}
const std::map<std::string, int>& PmergeMe::getMapSequence()const {return _mSequence;}

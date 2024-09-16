#include "PmergeMe.hpp"
#include <algorithm>
#include <sstream>
#include <stdexcept>

void printMap(const std::map<std::string, int>& map) 
{
	std::map<std::string, int>::const_iterator it;
	//int j = 1;
	for(it = map.begin(); it != map.end(); ++it) 
	{
		//std::stringstream ssA, ssB;
		//ssA << "a" << j;
		//ssB << "b" << j;
		//if(map[ssA.str()])
		//	std::cout << "Key: " << ssA.str() << " Value: " << map[ssA.str()] << std::endl;
		//if(map[ssB.str()])
		//	std::cout << "Key: " << ssB.str() << " Value: " << map[ssB.str()] << std::endl;
		//j++;
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
		ssC << "a" << arrSize / 2 + 1;
		newMap[ssC.str()] = array[arrSize - 1];
	}
	std::cout << "newMap" << std::endl;
	std::cout << "map print: " << newMap.size() << std::endl;
	printMap(newMap);
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

std::map<std::string, int> _prerecursion(std::map<std::string, int>& masterChain)
{
	std::cout << "RecMap " << masterChain.size() << std::endl;
	std::map<std::string, int> recMap;
	//std::map<std::string, int>::iterator it = masterChain.begin();
	int i = 1;
	for(int j = 0; j < static_cast<int>(masterChain.size()) / 2; j++)
	{
		std::stringstream ssA;
		ssA << "a" << i;
		recMap[ssA.str()] = masterChain[ssA.str()];
		i++;
	}
	i = 1;
	for(int j = 0; j < static_cast<int>(masterChain.size()) / 2; j++)
	{
		std::stringstream ssA, ssB;
		ssA << "a" << i + static_cast<int>(masterChain.size() / 2);
		ssB << "b" << i;
		recMap[ssB.str()] = masterChain[ssA.str()];
		i++;
	}
	if (masterChain.size() % 2 != 0) 
	{
		std::stringstream ssU, ssA;
		ssU << "a" << static_cast<int>(masterChain.size() / 2 + 1);
		ssA << "a" << static_cast<int>(masterChain.size());
		recMap[ssU.str()] = masterChain[ssA.str()];
	}
	return recMap;
}

std::map<std::string, int> _postrecursion(std::map<std::string, int>& masterChain)
{
	std::cout << "PostRecMap " << masterChain.size() << std::endl;
	std::map<std::string, int> postRecMap;
	int i = 1;
	int j = 0;
	while(j < static_cast<int>(masterChain.size()) - 1)
	{
		std::stringstream ssA;
		std::stringstream ssM;
		ssA << "a" << i;
		ssM << "a" << j + 1;
		postRecMap[ssM.str()] = masterChain[ssA.str()];
		i ++;
		j += 2;
	}
	i = 1;
	j = 0;
	while(j < static_cast<int>(masterChain.size()) - 1)
	{
		std::stringstream ssA;
		std::stringstream ssM;
		ssA << "b" << i;
		ssM << "a" << j + 2;
		postRecMap[ssM.str()] = masterChain[ssA.str()];
		i ++;
		j += 2;
	}

	if (masterChain.size() % 2 != 0) 
	{
		std::stringstream ssU, ssA;
		ssU << "a" << static_cast<int>(masterChain.size() / 2 + 1);
		ssA << "a" << static_cast<int>(masterChain.size());
		postRecMap[ssA.str()] = masterChain[ssU.str()];
	}
	return postRecMap;
}

void PmergeMe::_mfordJohnsonSort(std::map<std::string, int>& map)
{
	if (map.size() <= 1) return;
	std::map<std::string, int> masterChain;

	//std::cout << "map print: " << map.size() << std::endl;
	std::cout << "FJALgo " << map.size() << std::endl;
	printMap(map);
	int j = 1;
	for (size_t i = 0; i < map.size() - 1; i += 2) 
	{
		std::stringstream ssA, ssNext, ssOG;

		ssA << "a" << j;
		ssNext << "b" << j;
		if (map[ssA.str()] < map[ssNext.str()]) 
			std::swap(map[ssA.str()], map[ssNext.str()]);

		masterChain[ssA.str()] = map[ssA.str()];

		if(!masterChain[ssA.str()])
			throw std::runtime_error("Something bad happened :(");
		j += 1;
	}
	std::cout << "\n" << std::endl;
	printMap(masterChain);
	std::map<std::string, int> recMap = _prerecursion(masterChain);
	std::cout << "\nafter pre" << std::endl;
	printMap(recMap);
	_mfordJohnsonSort(recMap);
	masterChain = _postrecursion(recMap);
	std::cout << "\nafter post" << std::endl;
	printMap(masterChain);

	
	for(size_t i = 0; i < map.size() / 2; i++)
	{
		std::stringstream ssB;
		std::stringstream ssNextA;
		ssB << "b" << i + 1;

		masterChain[ssB.str()] = map[ssB.str()];
	}
	std::cout << "After adding B" << std::endl;
	printMap(masterChain);
	std::vector<int> sortedMap;
	sortedMap =	_mfordJohnsonInsert(masterChain);

	if (map.size() % 2 != 0) 
	{
		std::stringstream ss;
		ss << "a" << j;
		std::stringstream ssU;
		ssU << "a" << static_cast<int>(map.size() / 2 + 1);
		int standalone = map[ssU.str()];
		std::cout << "last: ";
		std::cout << standalone << std::endl;
		(void)standalone;
		//int standalone = map[ss.str()];
		_binaryInsert(sortedMap, static_cast<int>(sortedMap.size()) - 1, standalone);
	}
	std::cout << "\n ";
	printVector(sortedMap);
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

std::vector<int> PmergeMe::_mfordJohnsonInsert(std::map<std::string, int>& map)
{
	if (!map["b1"]) throw std::runtime_error("Something awful happened, no b1");
	//std::map<std::string, int>::const_iterator it;
	//it = std::lower_bound(map.begin(), map.end(), map["b1"]);
	//mainChain.insert(mainChain.begin(), pends[0]);

	std::vector<int> sortedMap; 
	for(int i = 0; i < static_cast<int>(map.size()) / 2; i++)
	{
		std::stringstream ssA;
		ssA << "a" << i + 1;
		sortedMap.push_back(map[ssA.str()]);
	}
	sortedMap.insert(sortedMap.begin(), map["b1"]);//inserting b1 before a1

	printVector(sortedMap);

	int j = 1;
	int k = 3;
	//std::lower_bound(map.begin(), map.begin() + map.size() / 2, map[ssK.str()]);
	while (k < static_cast<int>(map.size()) / 2) 
	{
		for (int i = k - 1; i >= j; --i) 
		{
			std::stringstream ssK;
			ssK << "b" << i;
			_binaryInsert(sortedMap, k, map[ssK.str()]);//binary insertion
		}
		j = k;
		k = _jacobsthal(++k);
	}
	for (int i = static_cast<int>(map.size()) / 2 - 1; i >= j; --i) 
	{
		std::cout << "map size: " << map.size() / 2 << std::endl;
		std::stringstream ssK;
		ssK << "b" << i + 1;
		_binaryInsert(sortedMap, static_cast<int>(sortedMap.size()) - 1, map[ssK.str()]);
	}
	printVector(sortedMap);
	return sortedMap;
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

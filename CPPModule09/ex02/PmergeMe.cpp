#include "PmergeMe.hpp"
//int counter = 0;

void printMap(const std::map<std::string, int>& map) 
{
	std::map<std::string, int>::const_iterator it;
	for(it = map.begin(); it != map.end(); ++it) 
			std::cout << "Key: " << it->first << " Value: " << it->second << std::endl;
}

PmergeMe::PmergeMe(void) {}

std::map<std::string, int> PmergeMe::_conv2Map(std::vector<int>& array)
{
	//	std::cout << "_conv2Map" << std::endl;
	std::map<std::string, int> newMap;
	int j = 1;
	for(int i = 0; i < static_cast<int>(array.size()) - 1; i += 2)
	{
		std::stringstream ssA, ssB;
		ssA << "a" << j;
		ssB << "b" << j;
		newMap[ssA.str()] = array[i];
		newMap[ssB.str()] = array[i + 1];
		j++;
	}
	if(array.size() % 2 != 0)
	{
		std::stringstream ssC;
		ssC << "a" << array.size() / 2 + 1;
		newMap[ssC.str()] = array[array.size() - 1];
	}
	//printMap(newMap);
	return newMap;
}

PmergeMe::PmergeMe(std::vector<int>& arr, int container) : _sequence(arr)
{
	if (container == VECTOR)
	{
		//std::cout << "It's a Vector" << std::endl;
		_fordJohnsonSort(_sequence);
	}
	else if(container == MAP)
	{
		_mSequence = _conv2Map(_sequence);
		_mfordJohnsonSort(_mSequence);
		//std::cout << "It's a Map, counter: " << counter << std::endl;
	}
}

PmergeMe::PmergeMe(const PmergeMe& instance)
{
	operator=(instance);
}

PmergeMe& PmergeMe::operator=(const PmergeMe& rhs)
{
	if (this != &rhs)
		{
			_sequence = rhs._sequence;
			_mSequence = rhs._mSequence;
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
	//std::cout << "RecMap " << masterChain.size() << std::endl;
	std::map<std::string, int> recMap;
	int i = 1;
	for(int j = 0; j < static_cast<int>(masterChain.size());)
	{
		std::stringstream ss;
		ss << "a" << j + 1;
		std::stringstream ssA;
		ssA << "a" << i;
		recMap[ssA.str()] = masterChain[ss.str()];
		j++;
		if(j >= static_cast<int>(masterChain.size()))
			continue;
		std::stringstream sss;
		sss << "a" << j + 1;
		std::stringstream ssB;
		ssB << "b" << i;
		recMap[ssB.str()] = masterChain[sss.str()];
		j++;
		i++;
	}
	//i = 1;
	//for(int j = 0; j < static_cast<int>(masterChain.size()) / 2; j++)
	//{
	//	std::stringstream ssA, ssB;
	//	ssA << "a" << i + static_cast<int>(masterChain.size() / 2);
	//	ssB << "b" << i;
	//	recMap[ssB.str()] = masterChain[ssA.str()];
	//	i++;
	//}
	//if (masterChain.size() % 2 != 0) 
	//{
	//	std::stringstream ssU, ssA;
	//	ssU << "a" << static_cast<int>(masterChain.size() / 2 + 1);
	//	ssA << "a" << static_cast<int>(masterChain.size());
	//	recMap[ssU.str()] = masterChain[ssA.str()];
	//}

	return recMap;
}

std::map<std::string, int> _postrecursion(std::map<std::string, int>& masterChain)
{
	//std::cout << "PostRecMap " << masterChain.size() << std::endl;
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

	std::cout << "first map:" << std::endl;
	printMap(map);
	int j = 1;
	for (size_t i = 0; i < map.size() - 1; i += 2) 
	{
		std::stringstream ssA, ssNext, ssOG;

		ssA << "a" << j;
		ssNext << "b" << j;
		if (map[ssA.str()] < map[ssNext.str()]) 
		{
			std::swap(map[ssA.str()], map[ssNext.str()]);
		}

		masterChain[ssA.str()] = map[ssA.str()];
		//counter;

		if(!masterChain[ssA.str()])
			throw std::runtime_error("Something bad happened :(");
		j += 1;
	}
	//printMap(map);
	std::cout << "Pre masterChain:" << std::endl;
	masterChain = _prerecursion(masterChain);
	printMap(masterChain);
	_mfordJohnsonSort(masterChain);
	masterChain = _postrecursion(masterChain);
	std::cout << "Post masterChain:" << std::endl;
	printMap(masterChain);
	
	for(size_t i = 0; i < map.size() / 2; i++)
	{
		std::stringstream ssB;
		std::stringstream ssNextA;
		ssB << "b" << i + 1;

		masterChain[ssB.str()] = map[ssB.str()];
	}
	std::vector<int> sortedMap;
	sortedMap =	_mfordJohnsonInsert(masterChain);

	if (map.size() % 2 != 0) 
	{
		std::stringstream ssU;
		ssU << "a" << static_cast<int>(map.size() / 2 + 1);
		int standalone = map[ssU.str()];
	//std::cout << "Last num:" << map[ssU.str()] << std::endl;
		_binaryInsert(sortedMap, static_cast<int>(sortedMap.size()) - 1, standalone);
	}

	//printVector(sortedMap);
	masterChain = _conv2Map(sortedMap);
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
	//std::cout << "1MainChain: " << std::endl;
	//printVector(mainChain);	
	//std::cout << "1Pends: " << std::endl;
	//printVector(pends);	
	if (arr.size() % 2 != 0) 
	{
		standalone = arr[arr.size() - 1];
		hasStandalone = true;
	}

	_fordJohnsonSort(mainChain);

	_fordJohnsonInsert(mainChain, pends);
	if (hasStandalone)
		_binaryInsert(mainChain, static_cast<int>(mainChain.size()) - 1, standalone);

//	printVector(mainChain);
	arr = mainChain;
}

std::vector<int> PmergeMe::_mfordJohnsonInsert(std::map<std::string, int>& map)
{
	if (!map["b1"]) throw std::runtime_error("Something awful happened, no b1");

	//std::cout << map.size() << std::endl;
	std::vector<int> sortedMap; 
	for(int i = 0; i < static_cast<int>(map.size()) / 2; i++)
	{
		std::stringstream ssA;
		ssA << "a" << i + 1;
		sortedMap.push_back(map[ssA.str()]);
	}
	if(map.size() % 2 != 0)
	{
		std::stringstream ssA;
		ssA << "a" << map.size() / 2 + 1;
		sortedMap.push_back(map[ssA.str()]);
	}
	//sortedMap.insert(sortedMap.begin(), map["b1"]);//inserting b1 before a1
	//std::cout << "map b1: " << map["b1"] << std::endl;
	//printVector(sortedMap);
	//printMap(map);

	int j = 1;
	int k = 3;
	
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
	for (int i = static_cast<int>(map.size()) / 2; i >= j; --i) 
	{
		//std::cout << "map size: " << map.size() / 2 << std::endl;
		std::stringstream ssK;
		ssK << "b" << i;
		//std::cout << ssK.str() << ": " << map[ssK.str()] << std::endl;
		_binaryInsert(sortedMap, static_cast<int>(sortedMap.size()) - 1, map[ssK.str()]);
	}
	//printVector(sortedMap);
	return sortedMap;
}


void PmergeMe::_fordJohnsonInsert(std::vector<int>& mainChain, const std::vector<int>& pends) 
{
	if (pends.empty()) return;
	//printVector(pends);	

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
		//counter;
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

const std::vector<int>& PmergeMe::getVectorSequence()const {return _sequence;}

const std::map<std::string, int>& PmergeMe::getMapSequence()const {return _mSequence;}


void PmergeMe::printsortedMap() const
{
	if(_mSequence.empty())
		throw std::runtime_error("Map hasn't been sorted.");

	//std::cout << "here" << std::endl;
	std::map<std::string, int>::const_iterator ita = _mSequence.begin();
	std::map<std::string, int>::const_iterator itb = _mSequence.begin();
	std::advance(itb, (_mSequence.size() / 2));

	if (_mSequence.size() % 2 != 0)
		std::advance(itb, 1);

	for(;itb != _mSequence.end();) 
	{
		//std::cout << "Key: " << ita->first << " Value: " << ita->second << std::endl;
		//std::cout << "Key: " << itb->first << " Value: " << itb->second << std::endl;
		std::cout << ita->second << " ";
		std::cout << itb->second << " ";
		ita++;
		itb++;
	}
	if (_mSequence.size() % 2 != 0)
		std::cout << ita->second << " ";
		//std::cout << "Key: " << ita->first << " Value: " << ita->second << std::endl;
	//std::cout << "\n" << std::endl;
}

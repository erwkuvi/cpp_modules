#include "PmergeMe.hpp"

PmergeMe::PmergeMe(void) {}

PmergeMe::PmergeMe(std::map<std::string, int>& array)
{
	std::cout << "It's a Stack" << std::endl;
	(void)array;
}

PmergeMe::PmergeMe(std::vector<int>& arr) : _sequence(arr)
{
	std::cout << "It's a Vector" << std::endl;
	fordJohnsonSort(_sequence);
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

void PmergeMe::fordJohnsonSort(std::vector<int>& arr)
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

	fordJohnsonSort(mainChain);

	fordJohnsonInsert(mainChain, pends);

	if (hasStandalone)
		binaryInsert(mainChain, static_cast<int>(mainChain.size()) - 1, standalone);

	arr = mainChain;
}


void PmergeMe::fordJohnsonInsert(std::vector<int>& mainChain, const std::vector<int>& pends) 
{
	if (pends.empty()) return;
	std::cout << "2Pends: " << std::endl;
	printVector(pends);	

	//mainChain.insert(mainChain.begin(), pends[0]);

	int j = 0;
	int k = 3;
	while (k < static_cast<int>(pends.size())) 
	{
		for (int i = k - 1; i >= j; --i) 
			binaryInsert(mainChain, k, pends[i]);
		//for (int i = k - 1; i >= j; --i) 
		//	binaryInsert(mainChain, std::min(k, static_cast<int>(mainChain.size()) - 1), pends[i]);
		j = k;
		k = jacobsthal(++k);
	}
	for (int i = static_cast<int>(pends.size()) - 1; i >= j; --i) 
		binaryInsert(mainChain, static_cast<int>(mainChain.size()) - 1, pends[i]);
}


void PmergeMe::binaryInsert(std::vector<int>& mainChain, int right, const int& pendvalue) 
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

int PmergeMe::jacobsthal(int n) 
{
	if (n == 0) return 0;
	if (n == 1) return 1;
	//J(n) = J(n-1) 	+ 	2J(n-2)
	//J(2) = 1 				+ 	0 		= 1
	//J(3) = 2 				+ 	1 		= 3
	//J(4) = 3 				+ 	2 		= 5
	//J(5) = 5 				+ 	6 		= 11
	
	int c = jacobsthal(n - 1) + (2 * jacobsthal(n - 2));
	//std::cout << c << std::endl;
	return c;
}

const std::vector<int>& PmergeMe::getSequence()const {return _sequence;}



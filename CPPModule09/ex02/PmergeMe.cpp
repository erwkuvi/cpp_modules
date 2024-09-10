#include "PmergeMe.hpp"

PmergeMe::PmergeMe(void) {}

PmergeMe::PmergeMe(std::vector<int>& arr) //: _init(arg)
{
	fordJohnsonSort(arr);
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
	std::cout << list.size() << std::endl;

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
	if (arr.size() % 2 != 0) 
	{
		standalone = arr[arr.size() - 1];
		hasStandalone = true;
	}

	fordJohnsonSort(mainChain);

	fordJohnsonInsert(mainChain, pends);

	if (hasStandalone)
		binaryInsert(mainChain, static_cast<int>(mainChain.size()) - 1, standalone);
	
	printVector(mainChain);	

	arr = mainChain;
}


void PmergeMe::fordJohnsonInsert(std::vector<int>& mainChain, const std::vector<int>& pends) 
{
	if (pends.empty()) return;

	mainChain.insert(mainChain.begin(), pends[0]);

	int j = 1;
	int k = 3;
	while (k < static_cast<int>(pends.size())) 
	{
		for (int i = k - 1; i >= j; --i) 
			binaryInsert(mainChain, std::min(k, static_cast<int>(mainChain.size()) - 1), pends[i]);

		j = k;
		k = jacobsthal(++k);
	}

	for (int i = static_cast<int>(pends.size()) - 1; i >= j; --i) 
		binaryInsert(mainChain, static_cast<int>(mainChain.size()) - 1, pends[i]);
}


void PmergeMe::binaryInsert(std::vector<int>& arr, int right, const int& value) 
{
	int left = 0;
	while (left <= right) 
	{
		int mid = left + (right - left) / 2;
		if (arr[mid] == value) 
		{
			arr.insert(arr.begin() + mid, value);
			return;
		} 
		else if (arr[mid] < value) 
			left = mid + 1;
		else 
			right = mid - 1;
	}
	arr.insert(arr.begin() + left, value);
}

int PmergeMe::jacobsthal(int n) 
{
	if (n == 0) return 0;
	if (n == 1) return 1;
	int a = 0, b = 1, c;
	for (int i = 2; i <= n; ++i) 
	{
		c = b + 2 * a;
		a = b;
		b = c;
	}
	return b;
}


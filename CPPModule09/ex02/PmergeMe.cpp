#include "PmergeMe.hpp"
#include <string>
#include <iostream>

PmergeMe::PmergeMe(void) //: _init(some)
{
	std::cout << "PmergeMe Default constructor called" << std::endl; 
}

// In case you need to pass an  argument
//PmergeMe::PmergeMe(const std::string& arg) //: _init(arg)
//{
//	std::cout << "PmergeMe Constructor called" << std::endl; 
//}

PmergeMe::PmergeMe(const PmergeMe& instance)
{
	std::cout << "PmergeMe Copy constructor called" << std::endl; 
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

PmergeMe::~PmergeMe(void) //
{
	std::cout << "PmergeMe Destructor called" << std::endl; 
}

	//Further members implementations ..

//void PmergeMe::_insertSort(std::vector<int>& list, int left, int right)
//{
//	int key = 0;
//	int j = 0;
//	for (int i = left + 1; i <= right; ++i)
//	{
//		key = list[i];
//		j = i - 1;
//		while (j >= left && list[j] > key) 
//		{
//			list[j + 1] = list[j];
//			--j;
//		}
//		list[j + 1] = key;
//	}
//}


void PmergeMe::_merge(std::vector<int>& list, int left, int mid, int right)
{
	int n1 = mid - left + 1;
	int n2 = right  - mid;

	std::vector<int> l(n1);
	std::vector<int> r(n2);

	int i = 0;
	int j = 0;
	int k = left;

	for(int i = 0; i < n1; ++i)
		l[i] = list[left + i];
	for(int j = 0; j < n2; ++j)
		r[j] = list[mid + 1 + j];

	while (i < n1 && j < n2) 
	{
		if (l[i] <= r[j]) 
		{
			list[k] = l[i];
			++i;
		} 
		else 
		{
			list[k] = r[j];
			++j;
		}
		++k;
	}

	while (i < n1) 
	{
		list[k] = l[i];
		++i;
		++k;
	}

	while (j < n2) 
	{
		list[k] = r[j];
		++j;
		++k;
	}
}

void PmergeMe::_mergeInsertSort(std::vector<int>& arr, int left, int right)
{
//	if (right - left <= 10) {
//		_insertSort(arr, left, right);
//		return;
//	}
	int mid = left + (right - left) / 2;
	_mergeInsertSort(arr, left, mid);
	_mergeInsertSort(arr, mid + 1, right);
	_merge(arr, left, mid, right);
}


void PmergeMe::sort() 
{
	_mergeInsertSort(_sequence, 0, _sequence.size() - 1);
}

void PmergeMe::setSequence(const std::vector<int>& seq) 
{
	_sequence = seq;
}

const std::vector<int>& PmergeMe::getSequence() const 
{
	return _sequence;
}


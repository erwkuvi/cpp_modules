#include "PmergeMe.hpp"
#include <cctype>
#include <cstddef>
#include <exception>
#include <iostream>
#include <stdexcept>
#include <vector>
#include <algorithm>
#include <ctime>

//template<typename T>
//class Sequence 
//{
//};

void printArray(const int* arr, int size)
{
	for (int i = 0; i < size; i++)
		std::cout << arr[i] << " ";
	std::cout << "\n";
}

void printVectorFinal(const std::vector<int> list)
{
	std::vector<int>::const_iterator it;
	//std::cout << list.size() << std::endl;

	for (it = list.begin(); it != list.end(); it++)
	{
		std::cout << *it << " ";
	}
	std::cout << "\n";
}

void printVectors(const std::vector<int> list)
{
	std::vector<int>::const_iterator it;
	//std::cout << list.size() << std::endl;

	for (it = list.begin(); it != list.end(); it++)
	{
		std::cout << "List: " << *it << std::endl;
	}
}

bool isNumber(char* str)
{
	std::string temp(str);
	for(size_t i = 0; i < temp.size(); ++i)
	{
		if(!isdigit(temp[i]))
			return false;
	}
	return true;
}

bool dupNum(int* array, size_t arrSize)
{
	std::vector<int> tmp(array, array + arrSize);
	std::sort(tmp.begin(), tmp.end());

	for(size_t i = 1; i < tmp.size(); ++i)
	{
		if(tmp[i] == tmp[i - 1])
			return true;
	}
	return false;
}


int main(int argc, char** argv)
{
	try
	{
		if (argc < 3) 
		{
			if (argc < 2) 
				throw std::runtime_error("no arguments given.");
			throw std::runtime_error("there should be more than 1 argument given.");
		}

		int num = 0;
		size_t arrSize = argc - 1;
		int* input = new int[arrSize];
		std::cout << "Input size: " << arrSize << std::endl;
		for (size_t i = 1; i <= arrSize; ++i) 
		{
			if(!isNumber(argv[i]))
				throw std::runtime_error("bad arguments");
			num = std::atoi(argv[i]);
			if (num <= 0) 
				throw std::runtime_error("integers must be positive");
			input[i - 1] = num;
		}
	//std::cout << "\n" << std::endl;
		if(dupNum(input, arrSize)) 
			throw std::runtime_error("arguments cannot be duplicated");

		//std::cout << "Before:\t";
		//printArray(input, arrSize);
		//std::vector<int> mainChain(input, input + arrSize);


		//PmergeMe a(mainChain);//for vector
		PmergeMe a(input, arrSize);//for map
		delete[] input;

		//clock_t start = clock();
		//clock_t end = clock();
		//std::cout << "\n";
		//std::cout << "After:\t";
		//printVectorFinal(a.getSequence());

		//double vectorTime = static_cast<double>(end - start) / CLOCKS_PER_SEC;


		//;std::cout << "Time to process a range of " << arrSize << " elements with std::vector<int>: " << vectorTime << " us" << std::endl;
		//std::cout << "Time to process a range of " << arrSize << " elements with std::array<int>: " << mapTime << " us" << std::endl;
	}
	catch (std::exception& e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
	}
}

//The name of the program is PmergeMe
//use a positive integer sequence as arg
//merge-insert sort algorithm should be used
//error on the standard error
//use at least two diferrent containers
//Handle at least 3000 dif integers


// Sequence container: array, vector, deque, list
// Associative containers (sorted by keys): set, map
// Unordered associative containers: unordered_set, unordered_map
//
// Container adapters: stack, deque
//
// Split the collection in n/3 pairs of 2 elements and order these elements pairwise. (if the number of elements is odd, the last element isn't paired with any element.)
// Recursively sort the pairs of elements by their highest value. (if the numbers of elements is odd, the last element is not considered a highest value and is left at the end of the collection)
//

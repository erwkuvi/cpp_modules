#ifndef PMERGEME_HPP
#define PMERGEME_HPP
#include <algorithm>
#include <sstream>
#include <stdexcept>
#include <vector>
#include <cstddef>
#include <string>
#include <iostream>
#include <map>

#define MAP 1
#define VECTOR 2

class PmergeMe 
{
private:
	std::vector<int> _sequence;
	std::map<std::string, int> _mSequence;

	PmergeMe(void);
	void _fordJohnsonSort(std::vector<int>& arr);
	void _mfordJohnsonSort(std::map<std::string, int>& map);

	void _binaryInsert(std::vector<int>& mainChain, int right, const int& pendvalue);
	void _fordJohnsonInsert(std::vector<int>& mainChain, const std::vector<int>& pends);

	//void _mbinaryInsert(std::map<std::string, int>& chain, int right, const std::string& pendvalue);
	//void _mfordJohnsonInsert(std::map<std::string, int>& mainChain);
	std::vector<int> _mfordJohnsonInsert(std::map<std::string, int>& map);

	int _jacobsthal(int n);
	std::map<std::string, int> _conv2Map(std::vector<int>& array);

public:
	PmergeMe(const PmergeMe& instance);
	PmergeMe &operator=(const PmergeMe& rhs);
	PmergeMe (std::vector<int>& vector, int container);
	//PmergeMe(int* array, int arrSize);
	~PmergeMe(void);

	const std::vector<int>& getVectorSequence()const;
	const std::map<std::string, int>& getMapSequence()const;
	void printsortedMap() const;
};
#endif // PMERGEME_HPP


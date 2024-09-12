#ifndef PMERGEME_HPP
#define PMERGEME_HPP
#include <cstddef>
#include <string>
#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

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
	void _mfordJohnsonInsert(std::map<std::string, int>& mainChain);

	int _jacobsthal(int n);
	std::map<std::string, int> _conv2Map(int* array, int arrSize);

public:
	PmergeMe(const PmergeMe& instance);
	PmergeMe &operator=(const PmergeMe& rhs);
	PmergeMe (std::vector<int>& vector);
	PmergeMe(int* array, int arrSize);
	~PmergeMe(void);

	const std::vector<int>& getSequence()const;
	const std::map<std::string, int>& getMapSequence()const;
};
#endif // PMERGEME_HPP


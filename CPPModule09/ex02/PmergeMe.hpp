#ifndef PMERGEME_HPP
#define PMERGEME_HPP
//#include <string>
#include <vector>

class PmergeMe 
{
private:
	std::vector<int> _sequence;

	//void _insertSort(std::vector<int>& list, int left, int right);
	void _merge(std::vector<int>& list, int left, int mid, int right);
	void _mergeInsertSort(std::vector<int>& arr, int left, int right);


public:
    PmergeMe(void);
    PmergeMe(const PmergeMe& instance);
    PmergeMe &operator=(const PmergeMe& rhs);
    ~PmergeMe(void);

    void sort();
    void setSequence(const std::vector<int>& seq) ;
    const std::vector<int>& getSequence() const ;
};

#endif // PMERGEME_HPP

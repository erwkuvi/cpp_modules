#ifndef PMERGEME_HPP
#define PMERGEME_HPP
#include <cstddef>
#include <string>
#include <iostream>
#include <vector>
#include <array>
#include <algorithm>

class PmergeMe 
{
private:
	std::vector<int> _sequence;
	PmergeMe(void);
	void binaryInsert(std::vector<int>& mainChain, int right, const int& pendvalue);
	void fordJohnsonInsert(std::vector<int>& mainChain, const std::vector<int>& pends);
	int jacobsthal(int n);

public:
	PmergeMe(const PmergeMe& instance);
	PmergeMe &operator=(const PmergeMe& rhs);
	~PmergeMe(void);
	PmergeMe (std::vector<int>& arr);
	PmergeMe(std::array<int, std::size_t>& array);
	void fordJohnsonSort(std::vector<int>& arr);

	const std::vector<int>& getSequence()const;

};
#endif // PMERGEME_HPP

// Specialization for std::stack
//template<typename T>
//class FordJohnsonSort<int, std::stack<T> > {
//	public:
//		static void sort(std::stack<int>& s) {
//			std::vector<int> v;
//			while (!s.empty()) {
//				v.push_back(s.top());
//				s.pop();
//			}
//			FordJohnsonSort<int, std::vector<int> >::sort(v);
//			for (typename std::vector<int>::reverse_iterator it = v.rbegin(); it != v.rend(); ++it) {
//				s.push(*it);
//			}
//		}
//};

//	//template<typename T>
//class PmergeMe 
//{
//private:
//	std::vector<int> _sequence;
//
//	//void _insertSort(std::vector<int>& list, int left, int right);
//	void _merge(std::vector<int>& list, int left, int mid, int right);
//	void _mergeInsertSort(std::vector<int>& arr, int left, int right);
//
//
//public:
//    PmergeMe(void);
//    PmergeMe(const PmergeMe& instance);
//    PmergeMe &operator=(const PmergeMe& rhs);
//    ~PmergeMe(void);
//
//    void sort();
//    void setSequence(const std::vector<int>& seq) ;
//    const std::vector<int>& getSequence() const ;
//};

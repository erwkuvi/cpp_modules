#ifndef PMERGEME_HPP
#define PMERGEME_HPP
#include <string>

class PmergeMe 
{
private:
    // Add your private members here

public:
    //PmergeMe(const std::string& arg); // In case you need to pass an  argument
//Orthodox canonical begin
    PmergeMe(void);
    PmergeMe(const PmergeMe& instance);
    PmergeMe &operator=(const PmergeMe& rhs);
    ~PmergeMe(void);
//Orthodox canonical end

    // Add your class members and methods here
};

std::ostream& operator<<(std::ostream& output, const PmergeMe& instance);

#endif // PMERGEME_HPP

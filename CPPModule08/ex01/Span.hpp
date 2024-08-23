#ifndef SPAN_HPP
#define SPAN_HPP
#include <cstddef>
#include <vector>
#include <algorithm>


class Span 
{
private:
	size_t _maxN;
	std::vector<size_t> _vector;
	//size_t _maxN;
	//std::list<size_t> _storage; 

public:

    Span(size_t maxNum);

		Span(void);
//Orthodox canonical begin
    Span(const Span& instance);
    Span &operator=(const Span& rhs);
    ~Span(void);
//Orthodox canonical end

  void addNumber(size_t n);//throw an exception 
	size_t shortestSpan();//if no numbers or only one, throw an exception
	size_t longestSpan();
void fillSpan(std::vector<size_t>::iterator begin, std::vector<size_t>::iterator end);
};


#endif // SPAN_HPP

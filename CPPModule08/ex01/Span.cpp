#include "Span.hpp"
#include <iostream>
#include <ctime>
#include <algorithm>
#include <cstddef>
#include <stdexcept>
#include <vector>

Span::Span(void) : _maxN(0), _vector() {}

Span::Span(size_t maxNum) : _maxN(maxNum), _vector() {}

Span::Span(const Span& instance)
{
	_maxN = instance._maxN;
	_vector = instance._vector;
}

Span& Span::operator=(const Span& rhs)
{
	if (this != &rhs)
	{
		_maxN = rhs._maxN;
		_vector = rhs._vector;
	}
	return *this;
}

Span::~Span(void) 
{
	_vector.clear();
}


void Span::addNumber(size_t n)
{
	if(_vector.size() < _maxN)
		_vector.push_back(n);
	else
		throw std::runtime_error("Error: maximum capacity reached");
	
}//throw an exception 

size_t Span::shortestSpan()
{
	if(_vector.size() <= 1)
		throw std::runtime_error("Error: not enough values");

	std::vector<size_t> tmp(_vector);
	std::sort(tmp.begin(), tmp.end());
	size_t smallest = tmp[1] - tmp[0];
	for (size_t i = 2; i < tmp.size(); ++i) 
	{
		size_t current = tmp[i] - tmp[i - 1];
		if (current < smallest) 
			smallest = current;
	}
	tmp.clear();
	return smallest;
}//if no numbers or only one, throw an exception

size_t Span::longestSpan()
{
	if(_vector.size() <= 1)
		throw std::runtime_error("Error: not enough values");

	std::vector<size_t> tmp(_vector);
	std::sort(tmp.begin(), tmp.end());
	size_t longest = tmp[1] - tmp[0];
	for (size_t i = 2; i < tmp.size(); ++i) 
	{
		size_t current = tmp[i] - tmp[i - 1];
		if (current > longest) 
			longest = current;
	}
	tmp.clear();
	return longest;
}

void Span::fillSpan(std::vector<size_t>::iterator begin, std::vector<size_t>::iterator end)
{
	std::copy()
	if(nElements + _vector.size() > _maxN)
		throw std::runtime_error("Error: maximum capacity would be reached");
	std::srand(static_cast<unsigned int>(std::time(NULL)));
	int randVal = std::rand() % 100 + 1;
	std::cout << randVal;
	//std::transform(_vector.)

}

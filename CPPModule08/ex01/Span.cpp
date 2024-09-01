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
		throw std::runtime_error("Error shortest span: not enough values");

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
		throw std::runtime_error("Error longest span: not enough values");

	std::vector<size_t> tmp(_vector);
	std::sort(tmp.begin(), tmp.end());
	size_t longest = tmp[_vector.size() - 1] - tmp[0];
	for (size_t i = 2; i < tmp.size(); ++i) 
	{
		size_t current = tmp[i] - tmp[i - 1];
		if (current > longest) 
			longest = current;
	}
	tmp.clear();
	return longest;
}

void printVector(const std::vector<size_t> list)
{
	std::vector<size_t>::const_iterator it;

	for (it = list.begin(); it != list.end(); it++)
	{
		std::cout << "Print List: " << *it << std::endl;
	}
}
void Span::fillSpan(std::vector<size_t>::iterator begin, std::vector<size_t>::iterator end)
{
	//std::vector<size_t> myints = {42, 22};
	size_t len = std::distance(begin, end);
	size_t ogSize = _vector.size();
	if(len + _vector.size() > _maxN)
		len = _maxN - _vector.size();
	_vector.resize(_vector.size() + len);
	//std::cout << "\nsize: " << _vector.size() << "\n" << std::endl;
	//printVector(_vector);
	std::copy_n(begin, len, _vector.begin() + ogSize);
	//std::copy_n(myints.begin(), len, _vector.begin());
	//std::cout << "\n len " << len << std::endl;
//	std::cout << "\n------------------: " << "\n" << std::endl;
//	printVector(_vector);
}

const std::vector<size_t>& Span::getVector() const {return _vector;}

std::ostream &operator<<(std::ostream& output, const Span& span)
{
	std::vector<size_t>::const_iterator it;
	for (it = span.getVector().begin(); it != span.getVector().end(); it++)
		output << "List: " << *it << std::endl;

	return output; 
}

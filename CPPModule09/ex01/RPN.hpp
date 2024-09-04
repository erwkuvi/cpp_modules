#ifndef RPN_HPP
#define RPN_HPP
#include <stdlib.h> 
#include <cstddef>
#include <iostream>
#include <string>
#include <deque>
#include <climits>

#define ADD '+'
#define SUB '-'
#define MULT '*'
#define DIV '/'

class RPN 
{
private:
	std::deque<int> _stack;
	std::deque<std::string> _ogInput;
	RPN(void);

	void _storeInput(const std::string& arg);
	int _operation(const char& operand, int a, int b);

public:
    RPN(const std::string& arg); // In case you need to pass an  argument

    RPN(const RPN& instance);
    RPN &operator=(const RPN& rhs);
    ~RPN(void);
};
#endif // RPN_HPP

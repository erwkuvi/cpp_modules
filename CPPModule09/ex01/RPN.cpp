#include "RPN.hpp"
#include <cctype>
#include <cstddef>
#include <stdexcept>
#include <string>

RPN::RPN(void) {}

void printStackFinal(std::deque<int>& stack)
{
	//std::cout << "\nPrint the Stack Final" << std::endl;
	std::deque<int> tmp = stack; 
	//std::cout << "Value:\t";
	for(size_t i = 0; i < stack.size(); ++i)
	{
		std::cout << tmp.front() << std::endl;
		tmp.pop_front();
	}
	//std::cout << "\n";
}

void printStack(std::deque<std::string>& stack)
{
	std::cout << "\nPrint the Stack" << std::endl;
	std::deque<std::string> tmp = stack; 
	std::cout << "Value:\t";
	for(size_t i = 0; i < stack.size(); ++i)
	{
		std::cout << tmp.front() << " | ";
		tmp.pop_front();
	}
	std::cout << "\n";
}

int RPN::_operation(const char& operand, int a, int b)
{
	int res = 0;
	switch (operand)
	{
		case ADD:
			res = a + b;
			break;
		case SUB:
			res = a - b;
			break;
		case MULT:
			res = a * b;
			break;
		case DIV:
			if (b == 0) {
				throw std::runtime_error("Error: Division by zero");
			}
			res = a / b;
			break;
		default:
			break;
	}
	if (res > INT_MAX)
		throw std::runtime_error("Error: Value reached INT_MAX");
	return res;
}

bool isOperator(std::string& str)
{
	if(str.size() == 1)
		return str[0] == ADD || str[0] == SUB || str[0] == MULT || str[0] == DIV;
	return false;
}
// In case you need to pass an  argument
RPN::RPN(const std::string& arg) //: _init(arg)
{
	_storeInput(arg);
	//printStack(_ogInput);
	int num1, num2, result;
	size_t ogSize = _ogInput.size();
	
	for(size_t i = 0; i < ogSize; ++i)
	{
		//std::cout << "Input is: " << _ogInput.front() << std::endl;
		if(isOperator(_ogInput.front()))
		{
			if(_stack.size() < 2)
				throw std::runtime_error("Error: not valid expression");
			num2 = _stack.back();
			_stack.pop_back();
			num1 = _stack.back();
			_stack.pop_back();
			result = _operation(_ogInput.front()[0], num1, num2);
			_stack.push_back(result);
		}
		else
			_stack.push_back(atoi(_ogInput.front().c_str()));
		_ogInput.pop_front();
	}
	printStackFinal(_stack);
}

RPN::RPN(const RPN& instance)
{
	operator=(instance);
}

RPN& RPN::operator=(const RPN& rhs)
{
	if (this != &rhs)
		{
			_stack = rhs._stack;
			_ogInput = rhs._ogInput;
		}
	return *this;
}

RPN::~RPN(void) {}


void checkWord(std::string& wrd)
{
	//std::cout << "hello: " << wrd << std::endl;
	std::string operatorStr("+-/*");
	if(wrd.size() > 2)
		throw std::runtime_error("Error: not valid operand/operator");
	if(wrd.size() == 2 && wrd[0] != '-')
		throw std::runtime_error("Error: not valid negative operand/operator");
	if(wrd.size() == 2 && !isdigit(wrd[1]))
		throw std::runtime_error("Error: not valid negative operand/operator");
	if(wrd.size() == 1 && operatorStr.find(wrd) == std::string::npos && !isdigit(wrd[0]))
		throw std::runtime_error("Error: not valid operand/operator.");
}

void RPN::_storeInput(const std::string& arg)
{
	size_t pos = 0;
	//size_t found = arg.find_first_not_of(" \t\r\n\v", pos);
	size_t found;
	std::string tmp;
	int dig = 0;
	int oprt = 0;
	while ((found = arg.find_first_of(' ', pos)) != std::string::npos) 
	{
		if(found > pos)
		{
			tmp = arg.substr(pos, found - pos);
			checkWord(tmp);
			if (isOperator(tmp))
			{
				if(dig < 2)
					throw std::runtime_error("Error: not valid expression");
				oprt++;
			}
			else
				dig++;
			_ogInput.push_back(tmp);

		}
		pos = found + 1;
	}
	if(pos < arg.length())
	{
		tmp = arg.substr(pos);
		checkWord(tmp);
		if(isOperator(tmp) && oprt == dig - 2)
			_ogInput.push_back(tmp);
		else
			throw std::runtime_error("Error: not valid expression");
	}
	else
	{
		if(!isOperator(tmp) || oprt == dig - 2)
			throw std::runtime_error("Error: not valid expression.");
	}
}

#ifndef DEFINEVAR_HPP
#define DEFINEVAR_HPP
#include <string>

enum VarType
{
	CHAR, INT, FLOAT, DOUBLE, ERROR
};

//typedef struct DefineVar 
//{
//	int i;
//	char c;
//	double d;
//	float f;
//
//} t_type;

typedef struct Definer
{

	VarType defineLiteral(const std::string& literal);
	//t_type var;

	bool isChar(const std::string& literal);
	bool isInt(const std::string& literal);
	bool isFloat(const std::string& literal); 
	bool isDouble(const std::string& literal);

	void printChar(const std::string& literal);
	void printInt(const std::string& literal);
	void printFloat(const std::string& literal);
	void printDouble(const std::string& literal);

} t_define;

#endif // DEFINEVAR_HPP

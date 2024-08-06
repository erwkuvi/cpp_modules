#ifndef DEFINEVAR_HPP
#define DEFINEVAR_HPP
#include <string>

enum VarType
{
	CHAR, INT, FLOAT, DOUBLE
};

typedef struct DefineVar 
{
	int i;
	char c;
	double d;
	float f;

};

typedef struct Definer
{

	VarType defineLiteral(const std::string& literal);
	DefineVar var;
};

static bool isChar(const std::string& literal);
static bool isInt(const std::string& literal);
static bool isFloat(const std::string& literal);
static bool isDouble(const std::string& literal);

static void printChar(const std::string& literal);
static void printInt(const std::string& literal);
static void printFloat(const std::string& literal);
static void printDouble(const std::string& literal);

#endif // DEFINEVAR_HPP

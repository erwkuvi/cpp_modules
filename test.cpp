#include <iostream>
#include <string>
#include <cmath>

std::string toBinary(int n)
{
    std::string r;
    while(n!=0) {r=(n%2==0 ?"0":"1")+r; n/=2;}
    return r;
}

int main(void)
{
	int num = 3;
	float numfl = 3.5;
	int bits = 8;
	int fixedpoint = num * (1 << bits); 
	int fixedpointfl = numfl * float(1 << bits); 

	std::string binar = toBinary(fixedpoint);
	std::cout << "Convert " << num << " to fixed-point number: " << fixedpoint << std::endl;
	std::cout << "Binary " << fixedpoint << ": " << binar << std::endl;
	std::cout << "Convert " << numfl << " to fixed-point number: " << fixedpointfl << std::endl;
	binar = toBinary(fixedpointfl);
	std::cout << "Binary float " << fixedpointfl << ": " << binar << std::endl;
	fixedpoint /= 1 << bits;
	float n = static_cast<float>(fixedpointfl / static_cast<float>(1 << bits));
	std::cout << "New Convert " << num << " to fixed-point number: " << fixedpoint << std::endl;
	std::cout << "New FloatConvert " << fixedpointfl << " to fixed-point number: " << n << std::endl;
	return 0;
}


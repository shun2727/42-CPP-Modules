#include <iostream>
#include <cmath>

int main(void)
{

	//int to fixed float and reverse
	// int x = 1234;
	// int z =  x << (8);
	// std::cout << z << "\n";
	// int y = z / (1 << 8);
	// std::cout << y << "\n";

	//float to fixed float and reverse (stored valus is )
	float x = 1234.77f;
	int z =  x * pow(2,8);
	std::cout << z << "\n";
	int y = z / pow(2,8);
	std::cout << y << "\n";


}

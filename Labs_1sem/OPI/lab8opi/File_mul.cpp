#include <iostream>

inline int getMul(int x, int y)
{
	std::cout << "getMul(" << x << "," << y << ") = ";
	return x * y;
}
#include <iostream>

int defaultparm(int a, int b, int c, int d, int e, int f = 5, int g = 5) {
	return (a+b+c+d+e+f+g)/7;
}

int main()
{
	defaultparm(1,2,3,4,5);

	defaultparm(1, 2, 3, 4, 5, 6, 7);
}
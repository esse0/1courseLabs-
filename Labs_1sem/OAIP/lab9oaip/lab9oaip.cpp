//Метод Трапеции N3
#include<iostream>

using namespace std;

int main()
{
	double a = 1, b = 6, n = 200, h, s = 0, x;

	h = (b - a) / n;
	x = a;

	for (x; x < (b - h); x += h)
	{
		s += h * (1 + pow(x, 3) + 1 + pow((x + h), 3)) / 2;
	}

	cout << "s = " << s << endl;
}
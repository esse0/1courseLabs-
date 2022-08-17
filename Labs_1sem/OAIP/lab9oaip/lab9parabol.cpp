//Метод парабол N3
#include<iostream>

using namespace std;

int main()
{
	double a = 1, b = 6, n = 200, h, s1 = 0, s2 = 0, x, z;

	h = (b - a) / (2 * n);
	x = a + 2 * h;
	
	for (int i = 1; i < n; i++)	
	{
		s2 += 1 + pow(x, 3);
		x = x + h;
		s1 += 1 + pow(x, 3);
		x = x + h;
	}

	z = (h / 3) * (4 * s1 + 2 * s2 + 1 + pow(a, 3) + 4 * (1 + pow((a + h), 3)) + 1 + pow(b, 3));

	cout << "z = " << z << endl;
}
//n5
#include<iostream>
using namespace std;

int main()
{
	double a = 8, b = 12, n = 200, h, s = 0, x;
	
	h = (b - a) / n;
	x = a;
	
	for (x; x < (b - h); x += h)
	{
		s +=abs( h * (5 - pow(x, 2) +5- pow((x + h), 2)) / 2);
	}
	
	cout << "s = " << s << endl;

	//double a = 8, b = 12, n = 200, h, s1 = 0, s2 = 0, x, z;
	//
	//h = (b - a) / (2 * n);
	//x = a + 2 * h;
	//
	//for (int i = 1; i < n; i++)
	//{
	//	s2 += 5- pow(x, 2);
	//	x = x+h;
	//	s1 += 5-pow(x, 2);
	//	x =x+ h;
	//}
	//
	//z = abs((h / 3) * (4 * s1 + 2 * s2 + 5-pow(a, 2) + 4 * (5- pow((a + h), 2)) +5- pow(b, 2)));
	//
	//cout << "z = " << z << endl;

	//N16
	/*double a = 0, b = 0.8, e = 0.0001, x=0;

	while (abs(a - b) > (2 * e))
	{
		x = (a + b) / 2;
		if ((pow(a, 2) + 4 * a - 2) * (pow(x, 2) + 4 * x - 2) <= 0)
		{
			b = x;
		}
		else
		{
			a = x;
		}
	}

	cout << x << endl;*/
}
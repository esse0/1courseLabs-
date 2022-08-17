//n1
#include<iostream>
using namespace std;
int main()
{
	double a = 1, b = 3, n = 200, h, s = 0, x;
	h = (b - a) / n;
	x = a;

	for (x; x < (b - h); x += h)
	{
		s += h * ( pow(x, 3)-3 + pow((x + h), 3)-3) / 2;
	}
	 
	cout << "s = " << s << endl;

	/*double a = 1, b = 3, n = 200, h, s1 = 0, s2 = 0, x, z;

	h = (b - a) / (2 * n);
	x = a + 2 * h;

	for (int i = 1; i < n; i++)
	{
		 s2 += -3 + pow(x, 3);
		 x = x+h;
		 s1 += -3+ pow(x, 3);
		 x =x+ h;
	}

	z = (h / 3) * (4 * s1 + 2 * s2 + -3 + pow(a, 3) + 4 * (-3 + pow((a + h), 3)) -3+ pow(b, 3));

	cout << "z = " << z << endl;*/


	//DixN1
//	double a = 0, b = 1.4, e = 0.0001, x=0;
//
//	while (abs(a - b) > (2 * e))
//	{
//		 x = (a + b) / 2;
//		 if ((pow(a, 3) + a - 3) * (pow(x, 3) + x - 3) <= 0)
//		 {
//			b = x;
//		 }
//		 else
//		 {
//			 a = x;
//		 }
//	}
//	cout << x << endl;
//}

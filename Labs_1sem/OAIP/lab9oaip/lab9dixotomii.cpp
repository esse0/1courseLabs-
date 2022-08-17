//Метод дихотомии N3
#include <iostream>

using namespace std;

int main()
{
	double a = 0, b = 0.5, e = 0.0001, x1, x = 0;

	if (((pow(a, 3) + 2 * a - 1) / (3 * pow(a, 2) + 2)) > 0) 
	{
		x1 = a;
	}
	else 
	{
		x1 = b;

		while (abs(x1 - x) > e)
		{
			x = x1;
			x1 = x - (pow(x, 3) + 2 * x - 1) / (3 * pow(x, 2) + 2);
		}

	}
	cout << x1 << endl;
}

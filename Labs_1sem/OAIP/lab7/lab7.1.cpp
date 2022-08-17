//Вариант 15

#include <iostream>;

void main()
{
	using namespace std;
	double x = -4e-3, s = 1.1, j = 4, b, z;
	while (j <= 7)
	{
		b = 12 * s - exp(-s / 2) * (x - j);
		if (b < 1.5)
		{
			z = sqrt(-2 * x * j) + b;
			cout << z << endl;
		}

		else
		{
			z = 13 * abs(x * j) + b;
			cout << z << endl;
		}

		j += 0.5;
	}
}
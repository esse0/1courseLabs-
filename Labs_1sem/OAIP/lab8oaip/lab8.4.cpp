//Задание 10.2
#include <iostream>

using namespace std;

void main()
{
	setlocale(LC_CTYPE, "Rus");
	float sum = 0;
	float x[5] = {2, 1.7, 4.7, 6, 3};
	float a[3] = {0.4, 8, 15};
	float y[3], b;
	int i;

	for (i = 0; i < 5; i++) {
		sum+= x[i];
	}
	for (i = 0; i < 3; i++) {
		y[i] = a[i] + sum;
		b = x[0];
		if (y[i] > b)
			b = y[i];
	}
	cout << "MAX y = " << b;
}
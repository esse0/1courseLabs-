//Задание 15.2
#include <iostream>

using namespace std;

void main()
{
	setlocale(LC_CTYPE, "Rus");
	float sum = 0;
	float x[6] = { 5, 4, 3, 2, 1, 6 };
	int i, a;
	a = x[0];
	for (int i = 0; i < 6; i++) {
		if (x[i] > a)
			a = x[i];
	}
	for (i = 0; i < 5; i++) {
		sum += a/(1+x[i]);
	}
	cout << sum;
	
}
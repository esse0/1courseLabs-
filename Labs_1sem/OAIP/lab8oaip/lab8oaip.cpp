//Задание 15.1
#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_CTYPE, "Rus");
	double t = 0.45;
	long double sum = 0, q;
	double x[6] = { 1.1, 6.2, 3, -4, 6, 1 };
	int i;
	for (i = 0; i < 6; i++) {
		sum += (x[i] + 1) / x[i];
	}
	q = t + sum;
	cout << q;
}
//Задание 10.1 
#include <iostream>

using namespace std;

void main()
{
	setlocale(LC_CTYPE, "Rus");
	float q = 0;
	float x[6] = {3, -2, 0.7, -1, -2, 7};
	float y[6] = {1, 5, -1.2, 6, 9, -4};
	int n = 6;
	for (int i = 0; i < n; i++) {
		q += (x[i] * y[i]);
	}
	cout << q;
}
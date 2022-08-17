//Задание 15.1

#include <iostream>

void main()
{
	setlocale(LC_CTYPE, "Rus");
	using namespace std;
	int i, sw, s;
	const int n = 10;
	int A[n] = {10, -2, -3, 6, -7, 5, 4, 7,-5, -6};
	for (s = 0; s < n; s++)
	{
		for (i = 0; i < n; i++)
		{
			if (*(A + i) < *(A + i + 1))
			{
				sw = *(A + i);
				*(A + i) = *(A + i + 1);
				*(A + i + 1) = sw;
			}
		}
	}
	cout << "Массив после сортировки: ";
	for (i = 0; i < n; i++) 
	{
		cout << " " << A[i];
	}
}

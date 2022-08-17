//Variant15

#include <iostream>
#include <ctime>

using namespace std;

void main()
{
	setlocale(LC_CTYPE, "Rus");

	const int max_size = 99;
	int mass[max_size], size, rmn = 0, rmx = 99, i, n;

	cout << "Введите размер массива: \n";
	cin >> size;

	if (size and size)
	{
		srand((unsigned)time(NULL));
		cout << "Массив до: \n";
		for (i = 0; i < size; i++)
		{
			mass[i] = (int)(((double)rand() / (double)RAND_MAX) * (rmx - rmn) + rmn);
			cout << mass[i] << " ";
		}
		cout << "\nНа сколько сдвинуть массив:\n";
		cin >> n;
		if (n and n)
		{
			cout << "\nМассив после: \n";
			for (i = 0; size > i; i++)
			{
				mass[i] = mass[i + n];
				cout << mass[i] << " ";
			}
		}
		else
		{
			cout << "\nНеверный символ!";
		}
	}
	else
	{
		cout << "\nНеверный символ!";
	}
}
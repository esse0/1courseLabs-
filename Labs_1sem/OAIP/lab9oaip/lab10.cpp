//Variant15

#include <iostream>
#include <ctime>

using namespace std;

void main()
{
	setlocale(LC_CTYPE, "Rus");

	const int max_size = 99;
	int mass[max_size], size, rmn = 0, rmx = 99, i;

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

			if (mass[i] % 3 == 0)
			{
				mass[i] = 0;
			}
		}
		cout << "\nМассив после: \n";
		for (i = 0; i < size; i++)
		{
			cout << mass[i] << " ";
		}
	}
	else
	{
		cout << "\nНеверный символ!";
	}
}
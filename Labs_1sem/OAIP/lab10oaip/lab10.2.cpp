//Variant15 Сдвиг массива влево

#include <iostream>
#include <ctime>

using namespace std;

void main()
{
	setlocale(LC_CTYPE, "Rus");

	const int max_size = 99;
	int mass[max_size], size, rmn = 0, rmx = 99, i, n;

	cout << "Введите размер массива: ";
	cin >> size;

	if (size and size) // Защита от букв
	{
		srand((unsigned)time(NULL));

		cout << "\nМассив до: ";

		for (i = 0; i < size; i++) // Заполнение массива
		{
			mass[i] = (int)(((double)rand() / (double)RAND_MAX) * (rmx - rmn) + rmn);
			cout << mass[i] << " ";
		}

		for(i = size; i < max_size;i++) // Ставим в пустые ячейки 0
		{
			mass[i] = 0;
		}

		cout << "\n\nНа сколько сдвинуть массив: ";
		cin >> n;

		if (n and n) // Защита от букв
		{
			cout << "\nМассив после: ";

			for (i = 0; size > i; i++) // Сдвиг массива Влево
			{
				mass[i] = mass[i + n];
				cout << mass[i] << " ";
			}
			cout << "\n";
		}
		else
		{
			cout << "\nНеверный символ!\n";
		}
	}
	else
	{
		cout << "\nНеверный символ!\n";
	}
}
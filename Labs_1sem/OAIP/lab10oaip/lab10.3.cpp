//Dop6 Максимальная сумма последовательности положительных чисел

#include <iostream>
#include <ctime>

using namespace std;

void main()
{
	setlocale(LC_CTYPE, "Rus");

	const int max_size = 100;
	int mass[max_size], size, rmn = -100, rmx = 100, i, max = 0, min = 0;

	cout << "Введите размер массива: ";
	cin >> size;

	if (size and size) // Защита от букв
	{
		cout << "\nМассив: ";
		srand((unsigned)time(NULL));

		for (i = 0; i < size; i++)
		{
			mass[i] = (int)(((double)rand() / (double)RAND_MAX) * (rmx - rmn) + rmn); // Заполнение массива рандом числами
			cout << mass[i] << " ";

			if (mass[i] >= 0) // Проверка на положительное число в массиве
			{
				min += mass[i];
			}
			else // Проверка на отрицательные числа в массиве
			{
				if (min > max) // Изменение максимальной суммы
				{
					max = min;
				}
				min = 0; // Сброс счетчика
			}
		}
		cout << "\n\nМаксимальная сумма последовательности: " << max << "\n";
	}
	else
	{
		cout << "\nНеверный символ!";
	}
}
// Dop3 Найти в массиве наибольшее число подряд идущих одинаковых элементов.

#include<iostream>
#include<ctime>

using namespace std;

int main() {
	setlocale(LC_CTYPE, "rus");
	srand((unsigned)time(NULL));

	int i = 0, number_mas = 0, y = 0, a = 1, b = 0;
	int massiv[100];

	for (i = 0; i < 100; i++)
	{
		massiv[number_mas] = rand() % 3;
		number_mas++;
	}

	number_mas = 0;

	for (i = 0; i < 100; i++)
	{
		cout << massiv[number_mas] << "  ";
		number_mas++;
	}

	for (number_mas = 0; number_mas < 99; number_mas++)
	{
		if (massiv[number_mas] == massiv[number_mas + 1])
		{
			a++;

		}
		else
		{
			if (a > 0 and a > b)
			{
				b = a;
				a = 1;
			}
			else
			{
				a = 1;
			}
		}
	}
	cout << "\n" << "\n" << "Макс. сумм. элементов последовательности положительных чисел:  " << b << "\n";
}
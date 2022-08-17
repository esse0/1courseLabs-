//1. Создать одномерный массив, содержащий 15 элементов, наполнить его случайными значениями в ин - 
// тервале от 1 до 200. Определить сумму всех нечетных элементов массива.
// 
#include <iostream>
using namespace std;
int main() {
	setlocale(LC_CTYPE, "rus");
	srand((unsigned)time(NULL));

	/////////////////////////////////

	/*int sum = 0;
	int schet = 0;
	int massiv[16];
	for (int i = 0; i < 15; i++)
	{
		massiv[i] = rand() % 200;
		schet++;
		if (schet % 2 == 0)
		{
			sum += massiv[i];
		}
	}
	for (int i = 0; i < 15; i++)
	{
		cout << massiv[i] << " ";
	}

	cout << endl << "Сумма = " << sum;*/

	//2. Проверить, есть ли в матрице хотя бы одна строка, содержащая положительный элемент и найти ее но -
	//мер.Знаки элементов предыдущей строки изменить на противоположные.

	int size = 5, numb = -1;
	int** massiv = new int* [size];
	for (int i = 0; i < size; i++)
	{
		massiv[i] = new int[size];
	}
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			massiv[i][j] = rand() % 11 - 9;
		}
	}
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			cout << massiv[i][j] << " ";
		}
		cout << endl;
	}
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (massiv[i][j] > 0)
			{
				numb = i;
				break;
			}
		}
		if (numb >= 0)
		{
			break;
		}
	}

	if (numb < 0)
	{
		cout << endl << "В массиве нет положительных элементов\n\n";
	}
	else
	{
		cout << endl;
		cout << "Номер строки содержащей положительнрый элемент = " << numb + 1;
		cout << endl;
		cout << endl;
		for (int i = 0; i < size; i++)
		{
			if (numb == 0)
			{
				massiv[numb][i] = massiv[numb][i] * (-1);
			}
			else
			{
				massiv[numb - 1][i] = massiv[numb - 1][i] * (-1);
			}
		}
		for (int i = 0; i < size; i++)
		{
			for (int j = 0; j < size; j++)
			{
				cout << massiv[i][j] << " ";
			}
			cout << endl;
		}




	}

	for (int i = 0; i < size; i++)
		delete[] massiv[i];
	delete[] massiv;
}
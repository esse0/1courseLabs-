#include <iostream>
using namespace std;
//1. В одномерном массиве, состоящем из n вещественных элементов, вычислить номер минимального элемента
// массива и сумму элементов массива, расположенных между первым и вторым отрицательными элементами.
int main() {
	setlocale(LC_CTYPE, "rus");
	srand((unsigned)time(NULL));
	cout << "1. В одномерном массиве, состоящем из n вещественных элементов, вычислить номер минимального элемента массива и сумму элементов массива, расположенных между первым и вторым отрицательными элементами.";
	int size, numb, sum = 0;
	cout << "\n\nВведите размер массива от 1 до 10 size = ";
	cin >> size;
	cout << endl;
	if (!(size <= 10 and size >= 1))
	{
		cout << "Введен некорректный символ или число";
		//return 0;
	}
	else
	{
		float* arr = new float[size];
		for (int i = 0; i < size; i++)
		{
			arr[i] = (float)(-10 + rand() % 20);
		}
		for (int i = 0; i < size; i++)
		{
			cout << " " << arr[i];
		}
		////
		int min = 10;
		for (int i = 0; i < size; i++)
		{
			if (arr[i] < min)
			{
				min = arr[i];
				numb = i + 1;
			}
		}
		cout << "\n\n Номер минимального элемента = " << numb;
		///
		for (int i = 0; i < size; i++)
		{
			if (arr[i] < 0)
			{
				i++;
				if (arr[i] < 0)
				{
					cout << "\nМежду отрицательными числами нет положительных или нет двух отрицательных элементов и тогда ";
					//return 0;
				}
				else
				{
					for (; i < size; i++)
					{
						if (arr[i] < 0)
						{
							break;
						}
						sum += arr[i];
					}
				}
			}
			if (arr[i] < 0)
			{
				break;
			}
		}
		cout << endl << "Сумма эелементов = " << sum;
		delete[] arr;
	}
	/////////////////////////////////////////////////////////////////////////////////
	//2. Дана целочисленная прямоугольная матрица. Определить количество столбцов, 
	//   не содержащих ни одного нулевого элемента.
	cout << "\n\n\n2. Дана целочисленная прямоугольная матрица. Определить количество столбцов, не содержащих ни одного нулевого элемента.";
	int kol = 0, kolW0 = 0;
	int row = 4, col = 6;
	int** mass = new int* [row];
	for (int i = 0; i < row; i++)
	{
		mass[i] = new int[col];
	}
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			mass[i][j] = rand() % 20 - 10;
		}
	}
	///////
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			cout << mass[i][j] << "   ";
		}
		cout << endl;
	}
	cout << endl;
	////////
	for (int i = 0; i < col; i++)
	{
		for (int j = 0; j < row; j++)
		{
			if (mass[j][i] == 0)
			{
				break;
			}
			else
			{
				kol++;
			}
		}
		kol = kol / row;
		kolW0 += kol;
		kol = 0;
	}
	cout << "\nКоличесто таких столбцов = " << kolW0;
	for (int k = 0; k < size; k++) //освобождение памяти
		delete[] mass[k];
	delete[] mass;
}
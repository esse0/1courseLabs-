#include <iostream>
using namespace std;
//1. В одномерном массиве, состоящем из п вещественных элементов, вычислить произведение отрицательных 
// элементов массива и сумму положительных элементов массива
int main() {
	setlocale(LC_CTYPE, "rus");
	srand((unsigned)time(NULL));
	cout << "1. В одномерном массиве, состоящем из п вещественных элементов, вычислить произведение отрицательных элементов массива и сумму положительных элементов массива";
	int* arr;
	int size, proizvedenie = 1, sum = 0;
	cout << "\n\nВведите размер массива от 1 до 10 size = ";
	cin >> size;
	cout << endl;
	arr = new int[size];
	if (!(size <= 10 and size >= 1))
	{
		cout << "Введен некорректный символ";
		return 0;
	}
	// Определение массива
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 20 - 10;
	}
	// Вывод заданного массива
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	// Сумма и произведение 
	for (int i = 0; i < size; i++)
	{
		if (arr[i] < 0)
		{
			proizvedenie *= arr[i];
		}
		else
		{
			sum += arr[i];
		}
	}
	cout << "\nПроизведение отрицательных чисел = " << proizvedenie;
	cout << "\nСумма положительных чисел = " << sum;
	cout << "\n\n\n\n";

	//////////////////////////////////////////////////////////////////////////////

//2. Дана матрица размером 4x4. Найти сумму наименьших элементов ее нечетных строк и наибольших элемен-тов ее четных строк.
	cout << "2. Дана матрица размером 4x4. Найти сумму наименьших элементов ее нечетных строк и наибольших элемен-тов ее четных строк.\n";
	int row = 4, col = 4, ch = 0, nch = 99999, min = 0, max = 0;
	int** doubl = new int* [row];
	for (int i = 0; i < row; i++)
	{
		doubl[i] = new int[col];
	}

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			doubl[i][j] = rand() % 20 - 10;
		}
	}
	///////
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			cout << doubl[i][j] << "   ";
		}
		cout << endl;
	}
	cout << endl;

	////////
	for (int i = 0; i < row; i++)
	{
		if ((i + 1) % 2 == 0)
		{
			for (int j = 0; j < col; j++)
			{
				if (doubl[i][j] > ch)
				{
					ch = doubl[i][j];
				}
			}
			cout << "\n" << ch;
			max += ch;
			ch = 0;
		}
		else
		{
			for (int j = 0; j < col; j++)
			{
				if (doubl[i][j] < nch)
				{
					nch = doubl[i][j];
				}
			}
			cout << "\n" << nch;
			min += nch;
			nch = 0;
		}
	}
	cout << "\n\nсумма мин эл нечетных строк = " << min;
	cout << "\nсумма макс эл четых строк = " << max;
	cout << "\n\n\n";
	for (int k = 0; k < size; k++) //освобождение памяти
		delete[] doubl[k];
	delete[] doubl;

	delete[] arr;


}
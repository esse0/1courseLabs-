#include <iostream>
using namespace std;
//1 В массиве из целых чисел определить сумму элементов, расположенных между первым и последним нулевыми элементами
int main() {
	setlocale(LC_CTYPE, "rus");
	srand((unsigned)time(NULL));
	//	int massiv[] = { 1, 2, 1, 0, 50, 7, 8, 5, 0, 4, 1 };
	//	int sum = 0;
	//	for (int i = 0; i < 11; i++)
	//	{
	//		if (massiv[i] == 0)
	//		{
	//			for (; i < 11; i++)
	//			{
	//				if (massiv[i + 1] == 0)
	//				{
	//					sum += massiv[i];
	//					break;
	//				}
	//				else {
	//					
	//					sum += massiv[i];
	//				}
	//			}
	//			break;
	//		}
	//	}
	//	cout << sum;

	//2 Если есть в матрице строка, все элементы которой положительны, то найти сумму этих элементов.Уменьшить все элементы матрицы на эту сумму.

	int size = 4;
	int** matr = new int* [size];
	for (int i = 0; i < size; i++)
	{
		matr[i] = new int[size];
	}
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			matr[i][j] = rand() % 10 - 1;
		}
	}

	/////// Вывод

	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			cout << matr[i][j] << "   ";
		}
		cout << endl;
	}

	// Проверка
	int check = 0;
	int sum = 0;
	for (int i = 0; i < size; i++)
	{
		check = 0;
		for (int j = 0; j < size; j++)
		{
			if (matr[i][j] <= 0)
			{
				check += 1;
				break;
			}
		}
		if (check == 0)
		{
			for (int a = 0; a < size; a++)
			{
				sum += matr[i][a];
			}
			break;
		}
	}
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			matr[i][j] -= sum;
		}
	}
	/////// Вывод
	cout << endl << endl;
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			cout << matr[i][j] << "   ";
		}
		cout << endl;
	}




	for (int i = 0; i < size; i++)
		delete[] matr[i];
	delete[] matr;
}
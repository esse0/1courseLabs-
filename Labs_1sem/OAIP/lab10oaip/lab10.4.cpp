// Dop2	Подсчитать количество пар соседних элементов массива с одинаковыми значениями

#include<iostream>
#include<ctime>

using namespace std;

int main() {
	srand((unsigned)time(NULL));
	setlocale(LC_ALL, "rus");

	int q = 0, massiv[20];

	for (int i = 0; i < 20; i++)
	{
		massiv[i] = rand() % 10;
		cout << massiv[i] << " ";
	}

	for (int i = 0; i < 20; i++) {
		if (massiv[i] == massiv[i + 1]) 
		{
			q++;
		}
	}
	cout << endl;
	cout << q;
}
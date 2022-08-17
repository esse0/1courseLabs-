//lab16 
#include <iostream>;
using namespace std;
//1. Найти сумму элементов, лежащих ниже главной диагонали в целочисленном массиве A[n, n].
//
//2. Написать программу, которая вводит несколько строк текста и символ «m» и использует 
//функцию, чтобы определить суммарное число вхождений символа в текст.
int second_task(int);
int first_task(int);

int main() {
	setlocale(LC_CTYPE, "rus");
	int n;
	cout << "\nВведите n - размер массива = ";
	cin >> n;
	cout << "\nКол-во символов = " << second_task(n);
	cout << "Сумма = " << first_task(n);

}

int second_task(int size)
{
	setlocale(LC_CTYPE, "rus");
	char* mchar;
	mchar = new char[size + 1];
	cout << "Введите строку ";
	cin >> mchar;
	char* pc, m, kol = 0;
	cout << "Введите символ m - ";
	cin >> m;
	pc = &m;
	for (int i = 0; i < size; i++)
	{
		if (mchar[i] == *pc)
		{
			kol++;
		}
	}
	return kol;
	delete[] mchar;
}
int first_task(int size) {
	srand(time(0));
	int** massiv = new int* [size];
	for (int i = 0; i < size; i++) {
		massiv[i] = new int[size];
	}
	/// 
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			massiv[i][j] = rand() % 10;
		}
	}
	///
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			cout << massiv[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
	///
	int sum = 0;
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			if (i == (size - 1)) {
				break;
			}
			if (i == j) {
				for (int k = i + 1; k < size; k++) {
					sum += massiv[k][j];
				}
			}
		}
	}
	return sum;
	for (int k = 0; k < size; k++) //освобождение памяти
		delete[] massiv[k];
	delete[] massiv;
}
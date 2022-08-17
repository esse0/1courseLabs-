// Ввести целое число A. Извлечь 3 бита числа A, начиная со второго по счету справа, и вставить их в число B, 
// начиная с первого бита по счету справа.

#include<iostream>
using namespace std;
int main() {
	setlocale(LC_CTYPE, "rus");
	char massiv[32];
	char massivB[32];
	int A, A_mask = 07;
	int B = 128;
	cout << "Введите A: ";
	cin >> A;
	if (A >= 0)
	{
		_itoa_s(A, massiv, 2);
		cout << "\n" << "Число в двоичной системе = " << massiv << "\n";
		A >>= 1;
		A &= A_mask;
		B <<= 3;
		B |= A;
		_itoa_s(B, massivB, 2);
		cout << "\n" << "Число в двоичной системе с добавление тех битов = " << massivB << "\n";
		return 0;
	}
	else
	{
		cout << "Введен некорректный символ";
	}
}
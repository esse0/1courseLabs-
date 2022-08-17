// Ввести целое число A. Инвертировать все биты с 2 по 14, включая эти биты. Вывести результат.

#include<iostream>

using namespace std;

int main() {
	setlocale(LC_CTYPE, "rus");

	unsigned int value, mask = 16382;
	char kod_simvola[32];
	cout << "Введите целое число: ";
	cin >> value;
	if (value >= 0)
	{
		_itoa_s(value, kod_simvola, 2);
		cout << "\nДвоичный вид: ";
		cout << kod_simvola;

		_itoa_s(value ^ mask, kod_simvola, 2);
		cout << "\n\nДвоичный вид с применением маски: ";
		cout << kod_simvola;
	}
	else
	{
		cout << "Введен некорректный символ";
	}
}
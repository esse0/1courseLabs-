//  Ввести целое число A. Инвертировать все биты с 4 по 8, включая эти биты. Вывести полученное число.

#include<iostream>
using namespace std;
void main() {
	setlocale(LC_CTYPE, "rus");
	unsigned int value, mask = 248;
	char kod_simvola[32];
	cout << "Введите целое число: ";
	cin >> value;
	if (value >= 0)
	{
		_itoa_s(value, kod_simvola, 2);
		cout << "\nДвоичный вид: ";
		cout << kod_simvola;

		_itoa_s(value ^ mask, kod_simvola, 2);
		cout << "\nДвоичный вид с применением маски: ";
		cout << kod_simvola;
	}
	else {
		cout << "Введен некорректный символ";
	}
}
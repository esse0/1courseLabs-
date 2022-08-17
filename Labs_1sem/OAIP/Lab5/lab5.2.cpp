//Вариант 15
#include <iostream>

int main()
{
	using namespace std;
	setlocale(LC_CTYPE, "Russian");
	int a, b, c, d;
	cout << "Введите a =\n";
	cin >> a;
	cout << "Введите b =\n";
	cin >> b;
	cout << "Введите c =\n";
	cin >> c;
	cout << "Введите d =\n";
	cin >> d;
	if (a and b and c and d) 
	{
		if (a % 2 == 0 or b % 2 == 0 or c % 2 == 0 or d % 2 == 0) 
		{
			cout << "Есть как минимум одно чётное";
		}
		else
		{
			cout << "Все нечётные";
		}
	}
	else
	{
		cout << "\nНЕВЕРНЫЙ СИМВОЛ";
	}
	return 0;
}
//1 ДОП
#include <iostream>

int main()
{
	using namespace std;
	setlocale(LC_CTYPE, "Russian");
	int a, b, c, sum = 0;
	cout << "Введите a =\n";
	cin >> a;
	cout << "Введите b =\n";
	cin >> b;
	cout << "Введите c =\n";
	cin >> c;
	a % 5 == 0 ? sum += a: sum = sum;
	b % 5 == 0 ? sum += b: sum = sum;
	c % 5 == 0 ? sum += c: sum = sum;
	sum > 0 ? printf("Cумма = %d",sum) : puts("Error");
	return 0;
}
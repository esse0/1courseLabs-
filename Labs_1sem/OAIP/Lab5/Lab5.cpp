//по блоксхеме из 2лабы
#include <iostream>

int main()
{
	using namespace std;
	setlocale(LC_CTYPE, "Russian");
	double a, b, c, d, y, f;
	a: cout << "Введите a =\n";
	cin >> a;
	cout << "Введите b =\n";
	cin >> b;
	cout << "Введите c =\n";
	cin >> c;
	if (a and b and c) 
	{
		d = pow(b, 2) - 4 * a * c;
		if (d < 0) {
			cout << "Нет корней";
		}
		else {
			y = (-b + sqrt(d)) / (2 * a);
			f = (-b - sqrt(d)) / (2 * a);
			cout << "x1= " << y << "  x2= " << f << endl;
		}
	}
	else
	{
		cout << "\nНЕВЕРНЫЙ СИМВОЛ";
	}
	return 0;
}
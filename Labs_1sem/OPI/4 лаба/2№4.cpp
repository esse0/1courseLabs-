//Вариант12

#include <iostream>
#include <iomanip>
#include <windows.h>



void main()
{	
	using namespace std;
	setlocale(LC_CTYPE, "Russian");
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	char c, probel; probel = ' ';
	cout << "Введите символ: " << endl;
	cin >> c;
	cout << setw(10) << setfill(probel) << probel;
	cout << setw(1) << setfill(c) << c << endl;
	cout << setw(10) << setfill(probel) << probel;
	cout << setw(1) << setfill(c) << c << endl;
	cout << setw(10) << setfill(probel) << probel;
	cout << setw(1) << setfill(c) << c << endl;
	cout << setw(10) << setfill(probel) << probel;
	cout << setw(1) << setfill(c) << c << endl;
	cout << setw(2) << setfill(probel) << probel;
	cout << setw(18) << setfill(c) << c << endl;
	cout << setw(10) << setfill(probel) << probel;
	cout << setw(1) << setfill(c) << c << endl;
	cout << setw(10) << setfill(probel) << probel;
	cout << setw(1) << setfill(c) << c << endl;
	cout << setw(10) << setfill(probel) << probel;
	cout << setw(1) << setfill(c) << c << endl;
	cout << setw(10) << setfill(probel) << probel;
	cout << setw(1) << setfill(c) << c << endl;
}

//#include <iostream>
//
//void main()
//{
//	setlocale(LC_CTYPE, "Russian");
//	using namespace std;
//	int a, b, c, d;
//	cout << "Введите число" << endl;
//	cin >> a;
//	b = a / 100;
//	c = (a - b * 100) / 10;
//	d = ((a - b * 100) - c * 10);
//	cout << "Реверс числа:" << d << c << b;
//}
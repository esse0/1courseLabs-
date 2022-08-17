//Вариант 16

#include <iostream>
#include <iomanip>
#include <windows.h>


void main()
{	
	using namespace std;
	setlocale(LC_CTYPE, "Russian");
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	char c, probel = ' ';
	cout << "Введите символ: " << endl;
	cin >> c;
	cout << setw(38) << setfill(probel) << probel;
	cout << setw(6) << setfill(c) << c << endl;
	cout << setw(35) << setfill(probel) << probel;
	cout << setw(12) << setfill(c) << c << endl;
	cout << setw(32) << setfill(probel) << probel;
	cout << setw(18) << setfill(c) << c << endl;
	cout << setw(32) << setfill(probel) << probel;
	cout << setw(18) << setfill(c) << c << endl;
	cout << setw(38) << setfill(probel) << probel;
	cout << setw(6) << setfill(c) << c << endl;
	cout << setw(38) << setfill(probel) << probel;
	cout << setw(6) << setfill(c) << c << endl;
	cout << setw(38) << setfill(probel) << probel;
	cout << setw(6) << setfill(c) << c << endl;
	cout << setw(38) << setfill(probel) << probel;
	cout << setw(6) << setfill(c) << c << endl;
	cout << setw(38) << setfill(probel) << probel;
	cout << setw(6) << setfill(c) << c << endl;
	cout << setw(39) << setfill(probel) << probel;
	cout << setw(4) << setfill(c) << c << endl;
}

//#include <iostream>
//
//void main()
//{
//	float u1, u2, u3, u4, u5, u;
//	using namespace std;
//	setlocale(LC_CTYPE, "Russian");
//	cout << "Введите u1" << endl;
//	cin >> u1;
//	cout << "Введите u2" << endl;
//	cin >> u2;
//	cout << "Введите u3" << endl;
//	cin >> u3;
//	cout << "Введите u4" << endl;
//	cin >> u4;
//	cout << "Введите u5" << endl;
//	cin >> u5;
//	if (u1 > 0 and u2 > 0 and u3 > 0 and u4 > 0 and u5 > 0)
//	{
//		u = (u1 + u2 + u3 + u4 + u5) / 5;
//		cout << "Средняя скорость:" << u;
//	}
//	else
//	{
//		cout << "Неправильно задана скорость";
//	}
//}
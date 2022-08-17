//Вариант 14
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
	cout << setw(41) << setfill(probel) << probel;
	cout << setw(1) << setfill(c) << c << endl;
	cout << setw(40) << setfill(probel) << probel;
	cout << setw(3) << setfill(c) << c << endl;
	cout << setw(39) << setfill(probel) << probel;
	cout << setw(5) << setfill(c) << c << endl;
	cout << setw(38) << setfill(probel) << probel;
	cout << setw(7) << setfill(c) << c << endl;
	cout << setw(37) << setfill(probel) << probel;
	cout << setw(9) << setfill(c) << c << endl;
	cout << setw(36) << setfill(probel) << probel;
	cout << setw(11) << setfill(c) << c << endl;
	cout << setw(35) << setfill(probel) << probel;
	cout << setw(13) << setfill(c) << c << endl;
	cout << setw(34) << setfill(probel) << probel;
	cout << setw(15) << setfill(c) << c << endl;
	cout << setw(33) << setfill(probel) << probel;
	cout << setw(17) << setfill(c) << c << endl;
	cout << setw(34) << setfill(probel) << probel;
	cout << setw(15) << setfill(c) << c << endl;
	cout << setw(35) << setfill(probel) << probel;
	cout << setw(13) << setfill(c) << c << endl;
	cout << setw(36) << setfill(probel) << probel;
	cout << setw(11) << setfill(c) << c << endl;
	cout << setw(37) << setfill(probel) << probel;
	cout << setw(9) << setfill(c) << c << endl;
	cout << setw(38) << setfill(probel) << probel;
	cout << setw(7) << setfill(c) << c << endl;
	cout << setw(39) << setfill(probel) << probel;
	cout << setw(5) << setfill(c) << c << endl;
	cout << setw(40) << setfill(probel) << probel;
	cout << setw(3) << setfill(c) << c << endl;
	cout << setw(41) << setfill(probel) << probel;
	cout << setw(1) << setfill(c) << c << endl;
}

//#include <iostream>
//
//void main()
//{
//	setlocale(LC_CTYPE, "Russian");
//	using namespace std;
//	int Pl, Rc, St, Gmr;
//	cout << "Введите число сбитых самолетов: " << endl;
//	cin >> Pl;
//	cout << "Введите число сбитых ракет: " << endl;
//	cin >> Rc;
//	cout << "Введите число сбитых спутников: " << endl;
//	cin >> St;
//	if (Pl >= 0 and Rc >= 0 and St >= 0)
//	{
//		Gmr = (Pl * 50) + (Rc * 100) + (St * 200);
//		cout << "Число очков игрока: " << Gmr;
//	}
//	else
//	{
//		cout << "Число сбитой техники должно быть >= 0";
//	}
//}

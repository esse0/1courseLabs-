//������� 15

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
	cout << "������� ������: " << endl;
	cin >> c;
	cout << setw(40) << setfill(probel) << probel;
	cout << setw(2) << setfill(c) << c << endl;
	cout << setw(38) << setfill(probel) << probel;
	cout << setw(6) << setfill(c) << c << endl;
	cout << setw(36) << setfill(probel) << probel;
	cout << setw(10) << setfill(c) << c << endl;
	cout << setw(34) << setfill(probel) << probel;
	cout << setw(14) << setfill(c) << c << endl;
	cout << setw(32) << setfill(probel) << probel;
	cout << setw(18) << setfill(c) << c << endl;
	cout << setw(30) << setfill(probel) << probel;
	cout << setw(22) << setfill(c) << c << endl;
	cout << setw(28) << setfill(probel) << probel;
	cout << setw(26) << setfill(c) << c << endl;
	cout << setw(30) << setfill(probel) << probel;
	cout << setw(22) << setfill(c) << c << endl;
	cout << setw(30) << setfill(probel) << probel;
	cout << setw(22) << setfill(c) << c << endl;
	cout << setw(30) << setfill(probel) << probel;
	cout << setw(22) << setfill(c) << c << endl;
	cout << setw(30) << setfill(probel) << probel;
	cout << setw(22) << setfill(c) << c << endl;
	cout << setw(30) << setfill(probel) << probel;
	cout << setw(22) << setfill(c) << c << endl;
}

//#include <iostream>
//
//int main()
//{
//	setlocale(LC_CTYPE, "Russian");
//	using namespace std;
//	int num, p, e;
//	cout << "������� � ��������" << endl;
//	cin >> num;
//	if (num > 0 and num < 145)
//	{
//		p = (num + 35) / 36;
//		e = (num + 3 - 36 * (p - 1)) / (4);
//		cout << "�������:" << p << endl;
//		cout << "����:" << e;
//	}
//	else
//	{
//		cout << "��� �������� � ����� �������";
//	};
//}
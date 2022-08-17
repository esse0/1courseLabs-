#include <iostream>
#include "windows.h"
#include <string>

using namespace std;

int main() 
{
	int max, mid, min = 0, swtch, area = 0, operations = 1;
	string steps;

	setlocale(0, "Rus");

	while (area <= 0) {
		cout << "Введите диапазон: "; cin >> area;

		if (cin.fail() || area <= 0) {
			system("cls");
			cout << "Диапазон введен некорректно!!!\n";
			cin.clear();
			cin.ignore(32767, '\n');
			Sleep(1200);
			system("cls");
			continue;
		}

	}

	max = area;

	system("cls");

	while (true)
	{
		cout << "Диапазон " << area << endl;
		mid = (min + max) / 2;
		if (mid < 0 || min > max) { 
			system("cls");
			cout << "Не верный выбор!!!\n";
			Sleep(1200);
			system("cls");
			break;
		}
		cout << "\nЧисло - " << mid;
		cout << "\n1.Много\n2.Мало\n3.Угадал\n\nВаш ответ: ";
		cin >> swtch;

		if (cin.fail() || swtch <= 0 || swtch > 3) {
			system("cls");
			cout << "Неправильный ответ!!!\n";
			cin.clear();
			cin.ignore(32767, '\n');
			Sleep(1200);
			system("cls");
			continue;
		}

		if (swtch == 1) {
			steps += " " + to_string(mid);
			operations += 1;
			max = mid - 1;
			cin.clear();
			cin.ignore(32767, '\n');
			system("cls");
			continue;
		}
		else if (swtch == 2) {
			steps += " " + to_string(mid);
			operations += 1;
			min = mid + 1;
			cin.clear();
			cin.ignore(32767, '\n');
			system("cls");
			continue;
		}
		else {
			steps += " " + to_string(mid);
			cout << "\nДиапазон: " << area;
			cout << "\nЧисло операций: " << operations;
			cout << "\nШаги: " << steps << endl;
			break;
		}
	}
	system("pause");
}
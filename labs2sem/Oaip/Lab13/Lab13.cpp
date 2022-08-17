#include <string>
#include <vector>
#include <iostream>
#include <time.h>

#include "MyHash.h"
#include "Info.h"

using namespace std;

info::recepoint choisepoint();
string getpointstr(info::recepoint point);
string getrandomname();

h::ListHash<info::Phone> table(16, h::simpleHashFunc);

int main() {
	srand(time(0));
	setlocale(0, "rus");
	int iinput;
	string strinput;
	float finput;

	info::Phone _info;
	vector<info::Phone> vecinfo;

	clock_t stt, endt;

	while (true)
	{
		try
		{
			system("cls");

			cout << "1.Добавить\n2.Удалить\n3.Получить\n4.Размер\n5.Степень заполнения\n6.Вывод\n$: "; cin >> iinput;

			switch (iinput)
			{
			case 1:
				cout << "\nВведите номер: "; cin >> _info.Number;
				cout << "\nИмя: "; cin >> strinput; _info.FirstName = strinput;
				cout << "Фамилия: "; cin >> strinput; _info.SecondName = strinput;
				cout << "Отчество: "; cin >> strinput; _info.FatherName = strinput;

				table.push(_info.Number, _info);

				break;
			case 2:
				cout << "\nВведите номер: "; cin >> iinput;

				table.pop(iinput);

				break;
			case 3:
				cout << "\nВведите номер телефона: "; cin >> iinput;

				stt = clock();
				vecinfo = table.search(iinput);
				endt = clock();

				cout << "Время поиска: " << ((double)endt - (double)stt) / (double)CLOCKS_PER_SEC << endl;

				cout << "\nКолизии:\n\n";

				for (int i = 0; i < vecinfo.size(); i++) {
					cout << "\nНомер: " << vecinfo[i].Number << endl;
					cout << "\nИмя: " << vecinfo[i].FirstName;
					cout << "\nФамилия: " << vecinfo[i].SecondName;
					cout << "\nОтчество: " << vecinfo[i].FatherName << endl;
				}

				break;
			case 4:
				cout << "\nРазмер = " << table.get_now_size() << endl << endl;
				break;
			case 5:
				cout << "\nСтепень заполнения = " << table.get_fill_factor() << endl << endl;
				break;
			case 6:
				if (table.get_size() == 0) throw "Таблица пустая";

				for (int i = 0; i < table.get_size(); i++)
				{
					cout << "Ключ " << i << " ->" << endl;
					for (int j = 0; j < table.get_list_pointer()[i].size(); j++)
					{
						cout << "\nНомер: " << table.get_list_pointer()[i][j].Number << endl;

						cout << "\nИмя: " << table.get_list_pointer()[i][j].FirstName;
						cout << "\nФамилия: " << table.get_list_pointer()[i][j].SecondName;
						cout << "\nОтчество: " << table.get_list_pointer()[i][j].FatherName << endl << endl;
					}
				}
				break;
			case 7:
				if (table.get_fill_factor() != 0) throw "table is not empty!";

				cout << "\n\nСтепень заполнения (0.f - 0.95f): "; cin >> finput;

				finput = (finput < 0) ? 0 : finput;
				finput = (finput > 0.95f) ? 0.95 : finput;

				while (table.get_fill_factor() < finput)
				{
					try
					{
						info::Phone p = { getrandomname(), getrandomname(), getrandomname(), rand() % 500 };

						table.push(p.Number, p);
					}
					catch (const char skiperr[]) {}
				}

				break;
			}

			system("pause");
		}
		catch (const char err[])
		{
			system("cls");
			cout << err << endl;
			system("pause");
		}
	}
}

info::recepoint choisepoint() {
	info::recepoint p;

	int input;

	cout << "\n1.Minsk\n2.Moskow\n3.Paris\n4.Tokio\n5.StariySverzen\n:: "; cin >> input;

	switch (input)
	{
	case 1:
		p = info::recepoint::Minsk;
		break;
	case 2:
		p = info::recepoint::Moskow;
		break;
	case 3:
		p = info::recepoint::Paris;
		break;
	case 4:
		p = info::recepoint::Tokio;
		break;
	case 5:
		p = info::recepoint::StariySverzen;
		break;
	default:
		p = info::recepoint::Minsk;
		break;
	}

	return p;
}

string getpointstr(info::recepoint point) {
	switch (point)
	{
	case info::recepoint::Minsk:
		return "Minsk";
	case info::recepoint::Moskow:
		return "Moskow";
	case info::recepoint::Paris:
		return "Paris";
	case info::recepoint::Tokio:
		return "Tokio";
	case info::recepoint::StariySverzen:
		return "StariySverzen";
	}
}

string getrandomname() {
	int randnum = rand() % 10;

	switch (randnum)
	{
	case 1:
		return "Dima";
	case 2:
		return "Anton";
	case 3:
		return "Nikita";
	case 4:
		return "Oleg";
	case 5:
		return "Akulich";
	case 6:
		return "Eremin";
	case 7:
		return "Hartanovich";
	case 8:
		return "Nesterovich";
	case 9:
		return "Aleksey";
	case 10:
		return "Andrey";
	default:
		return "Unknown";
	}
}
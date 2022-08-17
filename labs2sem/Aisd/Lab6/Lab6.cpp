#include "Hash.h"

int main() {

	setlocale(LC_CTYPE, "ru");

	int size;

	cout << "Размер хеш таблицы: "; cin >> size;

	hashtable table = hashtable(size, shash);

	int choise;

	int num, numd, c;

	hash_pack a;

	while (true)
	{
		try
		{
			cout << "1 - Вывести хэш таблицу" << endl;
			cout << "2 - Добавить элемент" << endl;
			cout << "3 - Удалить элемент" << endl;
			cout << "4 - Найти элемент" << endl;
			cout << "0 - Закрыть программу" << endl;
			cout << "$: ";
			cin >> choise;

			switch (choise)
			{
			case 0:
				exit(0);
				break;
			case 1:
				cout << "ТАБЛИЦА" << endl;
				table.print();
				cout << "----------------------" << endl;
				break;
			case 2:
				cout << "Введите номер телефона: ";
				cin >> a.number;
				cout << "Введите фамилию: ";
				cin >> a.f;
				cout << "Введите имя: ";
				cin >> a.i;
				cout << "Введите отчество: ";
				cin >> a.o;

				table.add(a);
				system("cls");
				break;
			case 3:
				cout << "Номер удаляемого: ";

				cin >> num;

				a = hash_pack(num, "", "", "");

				table.remove(a);

				system("cls");
				break;
			case 4:
				cout << "Введите номер: ";
				cin >> numd;
				a = table.search(numd);
				cout << "Номер = " << a.number << endl;
				cout << "Фамилия = " << a.f << endl;
				cout << "Имя = " << a.i << endl;
				cout << "Отчество = " << a.i << endl;
				break;
			default:
				cout << "Введите удаляемого:";

				cin >> numd;

				a = table.search(numd);

				cout << endl << "F = " << a.f << endl;
				cout << "I = " << a.i << endl;
				cout << "O = " << a.o << endl;
				cout << "Вы ввели что-то не то, постарайтесь получьше)";
				break;
			}

			system("pause");
			system("cls");
		}
		catch (const char err[])
		{
			system("cls");
			cout << err << endl;
			system("pause");
		}

	}
}

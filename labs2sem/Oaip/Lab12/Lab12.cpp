#include "Hash.h"
#include <iostream>
#include <chrono>

using namespace std;

struct AAA
{
	int key;
	char* mas;
	AAA(int k, char* z)
	{
		key = k;  mas = z;
	} AAA() {}
};
//-------------------------------
int key(void* d)
{
	AAA* f = (AAA*)d;   return f->key;
}
//-------------------------------
void AAA_print(void* d)
{
	cout << " ключ " << ((AAA*)d)->key << " - " << ((AAA*)d)->mas << endl;
}
//-------------------------------
int main()
{
	setlocale(LC_ALL, "rus");
	
	int siz = 10, choice, k;
	cout << "Введите размер хеш-таблицы" << endl; 	cin >> siz;

	Object H = create(siz, key);

	for (;;)
	{
		H.scan(AAA_print); cout << endl;
		cout << "1 - добавление элемента" << endl;
		cout << "2 - удаление элемента" << endl;
		cout << "3 - поиск элемента" << endl;
		cout << "0 - выход" << endl;
		cout << "$: ";   cin >> choice;
		switch (choice)
		{
		case 0:  exit(0);
		case 1: { 
				AAA* a = new AAA;
				char* str = new char[20];
				system("cls");
				cout << "введите ключ: ";	cin >> k;
				a->key = k;
				cout << "\nвведите строку: "; cin >> str;
				a->mas = str;
				if (H.N == H.size) {
					cout << "\nТаблица заполнена" << endl;
					system("pause");
					system("cls");
				}
				else {
					H.insert(a);
					system("cls");
				}
		} break;
		case 2: {  
			system("cls");
			cout << "\nвведите ключ для удаления: ";
			cin >> k;
			H.deleteByKey(k);
			system("cls");
		}  break;
		case 3: {  
			system("cls");
			cout << "\nвведите ключ для поиска: ";
			cin >> k;
			if (H.search(k) == NULL)
				cout << "Элемент не найден" << endl;
			else {
				std::chrono::steady_clock::time_point begin = std::chrono::steady_clock::now();
				void* func = H.search(k);
				std::chrono::steady_clock::time_point end = std::chrono::steady_clock::now();
				std::cout << "Diff(ms) = " << std::chrono::duration_cast<std::chrono::microseconds>(end - begin).count() << std::endl;
				std::cout << "Diff(ns) = " << std::chrono::duration_cast<std::chrono::nanoseconds> (end - begin).count() << std::endl;
				AAA_print(func);
			}
			system("pause");
			system("cls");
		}  break;
		}
	}
	return 0;
}
#include "Heap.h"
#include <iostream>
#include <tchar.h>
#include <windows.h>

using namespace std;

heap::CMP cmpAAA(void* a1, void* a2)  //Функция сравнения
{
#define A1 ((AAA*)a1)
#define A2 ((AAA*)a2)
	heap::CMP
		rc = heap::EQUAL;
	if (A1->x > A2->x)
		rc = heap::GREAT;
	else
		if (A2->x > A1->x)
			rc = heap::LESS;
	return rc;
#undef A2
#undef A1 
}
//-------------------------------
int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(LC_ALL, "rus");
	int k, choice, num;
	heap::Heap h1 = heap::create(30, cmpAAA);
	heap::Heap h2 = heap::create(30, cmpAAA);
	AAA* a1 = new AAA{ 50 };
	AAA* a2 = new AAA{ 16 };
	AAA* a3 = new AAA{ 11 };
	h2.insert(a1);
	h2.insert(a2);
	h2.insert(a3);
	for (;;)
	{
		cout << "------------------------------------------------------------------";
		h1.scan(0);
		cout << "------------------------------------------------------------------\n";
		cout << "1 - добавить элемент" << endl;
		cout << "2 - удалить максимальный элемент" << endl;
		cout << "3 - удалить минимальный элемент" << endl;
		cout << "4 - удаление N элемента" << endl;
		cout << "5 - обьединение куч" << endl;
		cout << "0 - выход" << endl;
		cout << "\n$:";  cin >> choice; cout << endl;
		switch (choice)
		{
		case 0:  exit(0);
		case 1: {
			system("cls"); 
			AAA* a = new AAA;
			cout << "введите ключ" << endl; 	cin >> k;
			a->x = k;
			h1.insert(a);
			system("cls");
		}
			  break;
		case 2:   h1.extractMax();
			system("cls");
			break;
		case 3: h1.extractMin(h1.Height());
			system("cls");
			break;
		case 4: 
			system("cls");
			cout << "\n Введите номер элемента: "; cin >> num;
			if (num-1 < h1.size) h1.extractI(num-1);
			system("cls");
			break;
		case 5:
			system("cls");
			h1.merge(&h2);
			system("cls");
			break;
		default:
			system("cls");
			cout << endl << "Введена неверная команда!" << endl;
			Sleep(700);
			system("cls");
			break;
		}
	} return 0;
}
//Создать очередь для целых чисел и функции для ввода, вывода и удаления элементов очереди.
//Создать очередь для символов и функции для ввода, вывода и удаления элементов очереди.
//Ввести символы с клавиатуры.
//Ввести эталонный символ и проверить, имеется ли он в очереди.При его наличии в очереди, 
//удалить все элементы до него.

#include <iostream>
#include "MyQueue.h"

using namespace std;

int main() {
	setlocale(LC_ALL, "rus");

	Queue* begin = NULL, * end, * t;
	int size, ch, r = 1;
	char simvl, p;
	t = new Queue;

	while (true) {
		cout << "1. Добавить элементы в очередь\n"; 
		cout << "2. Отобразить элементы очереди\n"; 
		cout << "3. Удалить элементы очереди до эталонного элемента\n";
		cout << "0. Выход\n";
		cout << "\n$: "; cin >> ch;
		switch (ch) {
		case 1:
			system("cls");
			cout << "Введите количество элементов: "; cin >> size;
			if (r == 1) {
				cout << "\nВведите элемент очереди: "; cin >> p;
				t->num = p;
				t->next = NULL;
				begin = end = t;
			}
			for (r; r < size; r++) {
				cout << "\nВведите элемент очереди: "; cin >> p;
				create(&begin, &end, p);
			}
			r = 0;
			system("cls");
			break;
		case 2:
			system("cls");
			if (begin == NULL)   //вывод на экран
				cout << "\nЭлементы очереди отсутствуют" << endl;
			else {
				cout << "\nЭлементы очереди: ";
				view(begin);
			}
			cout << endl;
			system("pause");
			system("cls");
			break;
		case 3:
			system("cls");
			cout << "\nВведите эталонный символ: "; cin >> simvl;
			t = Elem(begin, simvl);
			Del(&begin, &t);
			system("cls");
			break;
		case 0:
			return 0;
		default:
			"Не верный вариант...";
		}
		continue;
	}
}
// Var 2.2 Ввести с клавиатуры строку символов, состоящую из групп цифр и нулей,
//и записать ее в файл. Прочитать из файла данные и вывести самую короткую группу.

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int input(string array);
int output(string array);

int main() 
{	
	string arr;
	string arr2;
	setlocale(0, "Rus");
	cout << "Введите текст который нужно ввести: "; getline(cin, arr);
	input(arr);
	output(arr2);
}

int input(string array) {

	ofstream f1("File1.txt");
	f1 << array;
	f1.close();
	return 0;
}

int output(string array) {

	string word;
	int min = 0;

	ifstream f1("File1.txt");

	cout << "\nФайл содержит: ";

	if (!f1.is_open())
	{
		cout << "Error";
		exit(1);
	}
	while (!f1.eof())
	{
		f1 >> array;
		if  (min == 0) {
			min = array.length();
			word = array;
		}
		else if (min > array.length()) {
			min = array.length();
			word = array;
		}

		cout << array << " ";
	}
	cout << "\nСамая короткая группа: ";
	cout << word;
	f1.close();
	return 0;
}
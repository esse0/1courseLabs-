#include <tchar.h>
#include "D:\Labs\КПО\LP_Lab07S\LP_Lab07L\stdafx.h"

using namespace std;
using namespace Dictionary;

int _tmain(int argc, _TCHAR argv[]) {

	setlocale(LC_ALL, "ru");

	try
	{
		Dictionary::Instance d1 = Dictionary::Create("Преподователи", 5);

		Dictionary::Entry e1 = { 1, "Веялкин" }, e2 = { 2, "Смелов" }, e3 = { 3, "Барковский" }, e4 = { 4, "Чайковский" }, e5 = { 5, "Пацей" };

		Dictionary::AddEntry(d1, e1);
		Dictionary::AddEntry(d1, e2);
		Dictionary::AddEntry(d1, e3);
		Dictionary::AddEntry(d1, e4);

		Dictionary::Entry ex2 = Dictionary::GetEntry(d1, 4);

		Dictionary::DelEntry(d1, 2);

		Dictionary::Entry newEntry1 = { 6, "Гурин" };

		Dictionary::UpdEntry(d1, 3, newEntry1);

		Dictionary::Print(d1);

		cout << endl;

		Dictionary::Instance d2 = Dictionary::Create("Студенты", 5);

		Dictionary::Entry s1 = { 1, "Иванов" }, s2 = { 2, "Петров" }, s3 = { 3, "Сидоров" };

		Dictionary::AddEntry(d2, s1);
		Dictionary::AddEntry(d2, s2);
		Dictionary::AddEntry(d2, s3);

		Dictionary::Entry newEntry3 = { 3, "Николаев" };

		Dictionary::UpdEntry(d2, 3, newEntry3);

		Dictionary::Print(d2);

		Dictionary::Delete(d1);
		Dictionary::Delete(d2);

		/////////////////////////
#ifdef TEST_CREATE_01
		Instance d4 = Create("Преподаватеееееееееееели", 5);
#endif 
		//-------------------------------------------
#ifdef TEST_CREATE_02
		Instance d5 = Create("Преподаватели", DICTMAXSIZE + 1);
#endif
		//-------------------------------------------
#ifdef TEST_ADDENTRY_03
		AddEntry(d1, e4);
		AddEntry(d1, e4);
		AddEntry(d1, e4);
#endif
		//-------------------------------------------
#ifdef TEST_ADDENTRY_04
		AddEntry(d1, e2);
		AddEntry(d1, e2);
#endif
		//-------------------------------------------
#ifdef TEST_GETENTRY_05
		Entry ex05 = GetEntry(d1, 10);
#endif
		//-------------------------------------------
#ifdef TEST_DELENTRY_06
		DelEntry(d1, 7);
#endif
		//-------------------------------------------
#ifdef TEST_UPDENTRY_07
		Entry newentry1 = { 6,"Гурин" };
		UpdEntry(d1, 8, newentry1);
#endif
		//-------------------------------------------
#ifdef TEST_UPDENTRY_08
		Entry newentry1 = { 4,"Гурин" };
		UpdEntry(d1, 4, newentry1);
#endif
		//-------------------------------------------
#ifdef  TEST_DICTIONARY
		Instance d4 = Create("Преподаватели", 7);
		Entry e11 = { 1,"Гладкий" }, //элементы словаря
			e12 = { 2,"Веялкин" },
			e13 = { 3,"Смелов" },
			e14 = { 4,"Урбанович" },
			e15 = { 5,"Пацей" },
			e16 = { 6,"Иванов" },
			e17 = { 7,"Горин" };
		AddEntry(d4, e11);
		AddEntry(d4, e12);
		AddEntry(d4, e13);
		AddEntry(d4, e14);
		AddEntry(d4, e15);
		AddEntry(d4, e16);
		AddEntry(d4, e17);
		Print(d4);
		//-------------------------------------------
		Instance d3 = Create("Студенты", 7);
		Entry e01 = { 1,"Каспер" },
			e02 = { 2,"Чистякова" },
			e03 = { 3,"Хорошко" },
			e04 = { 4,"Муха" },
			e05 = { 5,"Лэ" },
			e06 = { 6,"Жмур" },
			e07 = { 7,"Сойкель" };
		AddEntry(d3, e01);
		AddEntry(d3, e02);
		AddEntry(d3, e03);
		AddEntry(d3, e04);
		AddEntry(d3, e05);
		AddEntry(d3, e06);
		AddEntry(d3, e07);
		Print(d3);
		Delete(d4);
		Delete(d3);
#endif
	}
	catch (const char* err)
	{
		cout << err << endl;
	};
	system("pause");
}
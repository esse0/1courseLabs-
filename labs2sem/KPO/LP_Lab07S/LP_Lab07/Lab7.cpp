#include <tchar.h>
#include "D:\Labs\���\LP_Lab07S\LP_Lab07L\stdafx.h"

using namespace std;
using namespace Dictionary;

int _tmain(int argc, _TCHAR argv[]) {

	setlocale(LC_ALL, "ru");

	try
	{
		Dictionary::Instance d1 = Dictionary::Create("�������������", 5);

		Dictionary::Entry e1 = { 1, "�������" }, e2 = { 2, "������" }, e3 = { 3, "����������" }, e4 = { 4, "����������" }, e5 = { 5, "�����" };

		Dictionary::AddEntry(d1, e1);
		Dictionary::AddEntry(d1, e2);
		Dictionary::AddEntry(d1, e3);
		Dictionary::AddEntry(d1, e4);

		Dictionary::Entry ex2 = Dictionary::GetEntry(d1, 4);

		Dictionary::DelEntry(d1, 2);

		Dictionary::Entry newEntry1 = { 6, "�����" };

		Dictionary::UpdEntry(d1, 3, newEntry1);

		Dictionary::Print(d1);

		cout << endl;

		Dictionary::Instance d2 = Dictionary::Create("��������", 5);

		Dictionary::Entry s1 = { 1, "������" }, s2 = { 2, "������" }, s3 = { 3, "�������" };

		Dictionary::AddEntry(d2, s1);
		Dictionary::AddEntry(d2, s2);
		Dictionary::AddEntry(d2, s3);

		Dictionary::Entry newEntry3 = { 3, "��������" };

		Dictionary::UpdEntry(d2, 3, newEntry3);

		Dictionary::Print(d2);

		Dictionary::Delete(d1);
		Dictionary::Delete(d2);

		/////////////////////////
#ifdef TEST_CREATE_01
		Instance d4 = Create("������������������������", 5);
#endif 
		//-------------------------------------------
#ifdef TEST_CREATE_02
		Instance d5 = Create("�������������", DICTMAXSIZE + 1);
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
		Entry newentry1 = { 6,"�����" };
		UpdEntry(d1, 8, newentry1);
#endif
		//-------------------------------------------
#ifdef TEST_UPDENTRY_08
		Entry newentry1 = { 4,"�����" };
		UpdEntry(d1, 4, newentry1);
#endif
		//-------------------------------------------
#ifdef  TEST_DICTIONARY
		Instance d4 = Create("�������������", 7);
		Entry e11 = { 1,"�������" }, //�������� �������
			e12 = { 2,"�������" },
			e13 = { 3,"������" },
			e14 = { 4,"���������" },
			e15 = { 5,"�����" },
			e16 = { 6,"������" },
			e17 = { 7,"�����" };
		AddEntry(d4, e11);
		AddEntry(d4, e12);
		AddEntry(d4, e13);
		AddEntry(d4, e14);
		AddEntry(d4, e15);
		AddEntry(d4, e16);
		AddEntry(d4, e17);
		Print(d4);
		//-------------------------------------------
		Instance d3 = Create("��������", 7);
		Entry e01 = { 1,"������" },
			e02 = { 2,"���������" },
			e03 = { 3,"�������" },
			e04 = { 4,"����" },
			e05 = { 5,"��" },
			e06 = { 6,"����" },
			e07 = { 7,"�������" };
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
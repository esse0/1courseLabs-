#include <iostream>
#include <string>
using namespace std;
int main() {
	setlocale(LC_CTYPE, "rus");
	cout << "Преобразовать строку: после каждой буквы a добавить символ «!»." << endl;
	cout << "Строка: qqqaqqq qqaqqqqqqaqqaq aqaaqqqq" << endl;

	char str[100] = "qqqaqqq qqaqqqqqqaqqaq aqaaqqqq";
	for (int i = 0; i < 99; i++)
	{
		if (str[i] == 'a')
		{
			for (int a = 99; a > i; a--)
			{
				str[a] = str[a - 1]; if (str[a] == 'a');
			}
			str[i + 1] = '!';
		}
	}
	int z = 0;
	cout << endl << str << "\n\n\n2. Дана строка символов, состоящая из букв, цифр, запятых, точек, знаков «+» и «–». Найти количество цифр\n";
	cout << "sa-..d1k,sd.++._sla23+.sco++4DMLCMDS5MK.678WE9.SAD\n\n";
	char kol[100] = "sa-..d1k,sd.++._sla23+.sco++4DMLCMDS5MK.678WE9.SAD";
	for (int i = 0; i < 100; i++)
	{
		if (kol[i] >= '0' and kol[i] <= '9')
		{
			z++;
		}
	}
	cout << "кол-во цифр в строке:" << z << endl;
}
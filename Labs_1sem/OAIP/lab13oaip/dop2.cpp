#include <iostream>
#include <string>
using namespace std;
int main() {
	setlocale(LC_CTYPE, "rus");
	// 4.	Отредактировать заданное предложение, удаляя из него все слова с нечетными номерами и переворачивая 
	//      слова с чет-ными номерами. Пример: HOW DO YOU DO преобразовать в OD OD.
	cout << "4.	Отредактировать заданное предложение, удаляя из него все слова с нечетными номерами и переворачивая слова с чет-ными номерами. Пример: HOW DO YOU DO преобразовать в OD OD.\n";
	cout << "Строка: HOW DO YOU DO \n\n\n";
	char str2[50] = "HOW DO you DO ";
	char str3[50] = {};
	int a = 0, b = 2, q = 0;
	for (int i = 0; i < 50; i++)
	{
		if (str2[i] == ' ')
		{
			b++;
			if (b % 2 != 0)
			{
				i++;
				while (str2[i] != ' ')
				{

					str3[q] = str2[i];
					q++;
					i++;
				}
				b++;
				str3[q] = str2[i];
				q++;
			}
		}
	}
	cout << str3 << endl;

	for (int i = 40; i >= 0; i--)
	{
		if (str3[i] == ' ')
		{
			i--;
			if (str3[i])
			{
				for (; i >= 0; i--)
				{
					if (str3[i]) {
						cout << str3[i];
					}

				}
			}
		}
	}
}

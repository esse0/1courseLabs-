#include <iostream>
using namespace std;
int main() {
	setlocale(LC_CTYPE, "rus");
	//1.	В заданной последовательности слов найти все слова, имеющие заданное окончание.
	cout << "1. В заданной последовательности слов найти все слова, имеющие заданное окончание.\n";
	char stroka[41] = "тощий немощный Кощей тащит ящик овощей \n";

	cout << "Строка: тощий немощный Кощей тащит ящик овощей\nй - заданное окончание\n";
	int kol = 0;
	for (int i = 0; i < 41; i++)
	{
		kol++;
		if (stroka[i] == 'й' && stroka[i + 1] == ' ')
		{
			for (; kol > 0; )
			{
				kol--;
				cout << stroka[i - kol];
			}
		}
		if (stroka[i] != 'й' && stroka[i + 1] == ' ')
		{
			kol = 0;
		}
	}
	cout << endl;
}

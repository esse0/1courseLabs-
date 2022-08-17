//Задание 6 switch
#include <iostream>

int main()
{
	using namespace std;
	setlocale(LC_CTYPE, "Russian");
	int k;
	puts("Добрый день, хотите узнать погоду на сегодня? (1-Да, 2-Нет)");
	cin >> k;
	switch (k)
	{
		case 1: 
		{
			puts("Выберите город(1 - Минск,2 - Москва, 3 - Мюнхен");
			cin >> k;
			switch (k)
			{
				case 1: 
				{
					puts("Погода в Минске -\n 8°C\n Вероятность осадков : 40 %\n Влажность : 69 %\n Ветер : 13 км / ч");
					break;
				}
				case 2:
				{
					puts("Погода в Москве-\n 8°C\n Вероятность осадков : 69 %\n Влажность : 78 %\n Ветер : 18 км / ч");
					break;
				}
				case 3:
				{
					puts("Погода в Мюнхене -\n 10°C\n Вероятность осадков : 1 %\n Влажность : 62 %\n Ветер : 13 км / ч");
					break;
				}
				default:
				{
					puts("Некорректный вариант");
					break;
				}
			}
			break;
		}
		case 2:
		{
			puts("Кроме погоды преложить нечего)");
			break;
		}
		default:
		{
			puts("Некорректный вариант");
			break;
		}
	}
	return 0;
}
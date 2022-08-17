#include <iostream>

using namespace std;

int main() 
{

	setlocale(LC_CTYPE, "rus");

	srand(time(0));

	short n;
	short sum = 0;

	cout << "Введите количество товаров: ";
	cin >> n;

	if (n < 1) {
		cout << "\nВы ввели недопустимое значение!";
		exit(1);
	}

	int* cost_tovarov = new int[n];

	for (short i = 0; i < n; i++)
	{
		cost_tovarov[i] = rand() % 99 + 1;
	}
	
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - i - 1; j++) {
			if (cost_tovarov[j] > cost_tovarov[j + 1]) {
				swap(cost_tovarov[j], cost_tovarov[j+1]);
			}
		}
	}

	if (n % 2 != 0)
	{
		for (short i = 0, j = n - 1; i < n / 2; i = i + 2)
		{
			swap(cost_tovarov[i], cost_tovarov[j - i - 1]);
		}

		for (short i = 0; i < n; i += 2)
		{
			sum += cost_tovarov[i];
		}

		cout << "\nПорядок пробивания на кассе\n";

		for (short i = 0; i < n; i++)
		{
			cout << cost_tovarov[i] << " ";
		}

		cout << endl << "\nМаксимальная сумма чека = " << sum;
	}
	else
	{
		for (short i = 0, j = n - 1; i < n / 2; i = i + 2)
		{
			swap(cost_tovarov[i], cost_tovarov[j - i]);
		}

		for (short i = 0; i < n; i += 2)
		{
			sum += cost_tovarov[i];
		}

		cout << "\nПорядок пробивания на кассе\n";

		for (short i = 0; i < n; i++)
		{
			cout << cost_tovarov[i] << " ";
		}

		cout << endl << "\nМаксимальная сумма чека = " << sum;
	}

	cout << endl;
	delete[] cost_tovarov;
}
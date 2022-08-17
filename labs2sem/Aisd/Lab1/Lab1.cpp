#include <iostream>
#include <ctime>

using namespace std;

void fib_cikl(int N);
int fib_rek(int N);

int main() {
	setlocale(0, "rus");

	float time;
	int N;

	cout << "Введите число: ";cin >> N;
	cout << "_Рекурсия_\n";

	clock_t start_time = clock();

	for (int i = 0; i <= N; i++) cout << fib_rek(i) << " ";

	clock_t end_time = clock();
	int search_time = (int)end_time - (int)start_time;

	cout << "\nВремя выполнения рекурсией - " << search_time << " мс";

	cout << "\n----------------\n";

	cout << "_Цикл_\n";

	clock_t start_time2 = clock();

	fib_cikl(N);

	clock_t end_time2 = clock();
	int search_time2 = (int)end_time2 - (int)start_time2;

	cout << "\nВремя выполнения циклом - " << search_time2 << " мс" << endl;

	system("pause");

	return 0;
}

int fib_rek(int N) {
	if (N == 1) {
		return 1;
	}
	else if (N == 0) return 0;
	else {
		return fib_rek(N - 1) + fib_rek(N - 2);
	}
}

void fib_cikl(int N) {
	int a = 0;
	int b = 1;
	cout << 0;
	for (int i = 0; i < N; i++)
	{
		a = a + b;
		b = a - b;
		cout << " " << a ;
	}
}

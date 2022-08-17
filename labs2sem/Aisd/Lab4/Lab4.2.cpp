#include <iostream>
#include <ctime>
#include <set>
#include <iterator>

using namespace std;

int main()
{
	setlocale(0, "rus");

	int N, sum = 0;

	cout << "Введите количество участников: ";
	cin >> N;

	int *A = new int[N];

	set <int> S;

	cout << "Массив: ";

	srand(time(0));

	for (int i = 0; i < N; i++)
	{
		A[i] = 1 + rand() % 99 + 1;
		cout << A[i] << " ";

	}

	cout << endl;

	for (int j = 0; j < N - 1; j++)
	{
		for (int i = j; i >= 0 && A[i] > A[i + 1]; i--)
		{
			A[i + 1] = A[i + 1] + A[i];
			A[i] = A[i + 1] - A[i];
			A[i + 1] = A[i + 1] - A[i];
		}
	}

	for (int i = 0; i < N; i++)
	{
		int b = A[i];
		S.insert(b);
	}

	for (int n = 0; n < 3; n++) {

		int max = *S.rbegin();

		for (int i = 0; i < N; i++) {

			if (A[i] == max) {
				sum += 1;
			}

		}

		S.erase(max);
	}

	cout << "Отсортированный массив: ";

	for (int i = 0; i < N; i++)
		cout << A[i] << " ";

	cout << endl << "Количество призёров = " << sum << endl;

	system("pause");
}
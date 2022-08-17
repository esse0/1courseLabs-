#include <ctime>             
#include <stdlib.h>
#include <iostream>
using namespace std;
//------------------------------
int* sort1(int m[], int lm)
{
	int buf;
	for (int i = 0; i < lm; i++)
		for (int j = 0; j < lm - i - 1; j++)
			if (m[j] > m[j + 1])
			{
				buf = m[j];
				m[j] = m[j + 1];
				m[j + 1] = buf;
			}
	return m;
}
//------------------------------
int* sort2(int m[], int lm[], int size)
{
	int i, j, count;
	for (i = 0; i < size; ++i)
	{
		for (count = 0, j = 0; j < size; ++j)
			if (m[j] < m[i] || (m[j] == m[i] && i < j))
				count++;
		lm[count] = m[i];
	}
	return 0;
}

void selectSort(int A[], int size)
{
	int k, i, j;
	for (i = 0; i < size - 1; i++)
	{
		for (j = i + 1, k = i; j < size; j++)
			if (A[j] < A[k])
				k = j;
		int c = A[k];
		A[k] = A[i];
		A[i] = c;
	}
}





//------------------------------
int getRandKey(int reg = 0) 
{
	if (reg > 0)
		srand((unsigned)time(NULL));
	int rmin = 0;
	int rmax = 100000;
	return (int)(((double)rand() / (double)RAND_MAX) * (rmax - rmin) + rmin);
}
//------------------------------

int main()
{
	setlocale(LC_CTYPE, "Russian");
	const int N = 30000;
	int k[N], f[N];
	clock_t  t1, t2;
	getRandKey(1);
	for (int i = 0; i < N; i++)
		f[i] = getRandKey(0);
	for (int n = 10000; n <= N; n += 10000)
	{
		cout << "n = " << n << endl;
		cout << "Сортировка пузырьком: " << endl;
		memcpy(k, f, n * sizeof(int));
		t1 = clock();
		sort1(k, n);
		t2 = clock();
		cout << "Время " << t2 - t1 << " мс" << endl;
		cout << "Сортировка подсчетом: " << endl;
		memcpy(k, f, n * sizeof(int));
		t1 = clock();
		sort2(f, k, n);
		t2 = clock();
		cout << "Время " << t2 - t1 << " мс" << endl << endl;
		cout << "Сортировка хоара: " << endl;
		memcpy(k, f, n * sizeof(int));
		t1 = clock();
		selectSort(k, n);
		t2 = clock();
		cout << "Время " << t2 - t1 << " мс" << endl;
	}
	return 0;

}
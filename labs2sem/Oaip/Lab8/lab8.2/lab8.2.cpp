//var 5
#include <iostream>

double factorial(int n)
{
	if (n < 0) return 0;
	if (n == 0) return 1;
	else return n * factorial(n - 1);
}


double cNM(int n, int m)
{
	return factorial(n) / (factorial(m) * factorial(n - m));
}


double Count(int n, int m)
{
	if (m > n || m < 0 || n < 0) return 0;
	if (m == 0 || n == m) return 1;
	else return cNM(n - 1, m) + cNM(n - 1, m - 1);
}

int main() {
	setlocale(LC_ALL, "rus");

	std::cout << "Ответ: " << Count(8, 6) << std::endl;
}
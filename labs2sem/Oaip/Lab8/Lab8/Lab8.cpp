//var 3
#include <iostream>

double square(int n, int i)
{
	if (i < n) return (sqrt(1 + (n + i) * square(n, i + 1)));
	else return sqrt(1 + (n + n));
}

int main() {
	setlocale(LC_ALL, "rus");

	int i = 1;
	std::cout << "Ответ: " << square(6, i) << std::endl;

}
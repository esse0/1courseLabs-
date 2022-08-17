//Условное 2
#include <iostream>


int main()
{
	using namespace std;
	float a = 0, sum = 0;

	while (a < 198)
	{
		sum += a;
		a += 3;
		cout << a << endl;
	}
	cout << sum;
}
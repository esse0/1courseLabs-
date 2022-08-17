//13 Вариант
#include <iostream>;

int main()
{
	using namespace std;
	double b = 3, c = 6e-4, a = 6, i = 8, t, x;
	while (i <= 24)
	{
		t = a * i / (a * a - b) * exp(-a);
		if (t > 5)
		{
			x = 4.8e-3 + i * a;
			cout << x << endl;
		}

		else
		{
			x = a + i * i * t;
			cout << x << endl;
		}

		i += 4;
	}
}
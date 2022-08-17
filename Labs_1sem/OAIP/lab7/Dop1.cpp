//Условное 13
#include <iostream>

int main()
{
	using namespace std;
	int a = 1, i = 1;
	for (i; i <= 6; )
	{
		if (a % 3 == 0 and a % 5 == 0)
		{
			cout << a << endl;
			i++;
		}
		a++;
	}
}
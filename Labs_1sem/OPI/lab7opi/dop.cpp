#include <iostream>

int main()
{
	setlocale(LC_ALL, "Rus");
	using namespace std;
	float vessel1, vessel2;
	cout << "Сколько литров в первом сосуде: ";
	cin >> vessel1;
	cout << "Сколько литров во втором сосуде: ";
	cin >> vessel2;
	if (vessel1 and vessel2) {
		cout << "c1" << "\t" << "c2" << endl;
		for (int i = 1; i <= 12;)
		{
			if (i % 2 != 0)
			{
				vessel2 = vessel2 + 0.5 * vessel1;
				vessel1 = 0.5 * vessel1;
				i++;
				cout << vessel1 << "\t" << vessel2 << endl;
			}
			else
			{
				vessel1 = vessel1 + 0.5 * vessel2;
				vessel2 = 0.5 * vessel2;
				i++;
				cout << vessel1 << "\t" << vessel2 << endl;

			}

		}
	}
	else
	{
		cout << "\nНЕВЕРНЫЙ СИМВОЛ!!!";
	}
	return 0;
}

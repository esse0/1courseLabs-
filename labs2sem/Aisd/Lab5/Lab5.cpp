#include <iostream>
#include <stack>
using namespace std;

int main()
{
	setlocale(0, "rus");

	int size;

	stack <char> steck;
	bool fl = 1;

	char* A = new char[100];

	cout << "Введите строку ";
	cin >> A;

	size = strlen(A);

	for (int i = 0; i < size; ++i)
	{
		switch (A[i]) {
			case '(': steck.push(A[i]); break;

			case '[': steck.push(A[i]); break;

			case '{': steck.push(A[i]); break;

			case ')': 
				if (steck.top() == '(')
					steck.pop();
				else
					fl = 0;
				break;

			case ']':
				if (steck.top() == '[')
					steck.pop();
				else
					fl = 0;
				break;

			case '}':
				if (steck.top() == '{')
					steck.pop();
				else
					fl = 0;
				break;
		}
	}

	if (!fl) {

		cout << "\nСкобки расставлены не верно\n";
	}
	else {

		if (!steck.empty()) {
			cout << "\nСкобки расставлены не верно\n";
		}
		else {
			cout << "\nСкобки расставлены верно\n";
		}

	}

	system("pause");
}
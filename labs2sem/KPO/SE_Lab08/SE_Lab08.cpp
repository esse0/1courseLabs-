#include <iostream>
#include "Call.h"

using namespace Call;
using namespace std;

int main()
{
	setlocale(0, "rus");

	int num = 4;
	
	int f_res = cdevl(1, 2, 3);
	int s_res = cstd(num, 3, 2);
	int t_res = cfst(5, 6, 7, 8);

	cout << "Результат cdecl: " << f_res << endl;

	cout << "Результат stdcall: " << s_res << endl;

	cout << "Результат fastcall: " << t_res << endl;

}
#include<iostream> //Кратность 16

using namespace std;

//void main()
//{
//	setlocale(LC_CTYPE, "rus");
//	int A, B, p, n;
//	char tmp[33];
//
//	cout << "Введите число: ";
//	cin >> A;
//	if (A == false)
//	{
//		cout << "Eror" << endl;
//	}
//
//	if ((A & 15) == 0) {
//		cout << "Число кратно 16\n\n";
//	}
//	else {
//		cout << "Число не кратно 16\n\n";
//	}
//}
// Вывести 6 бит целого числа А, начиная со 2-ого n битов.
int main(){
	setlocale(LC_CTYPE, "rus");
	char tmp[33];
	int A, maskA = 126, p, n;
	cout << "Введите число А: ";
	cin >> A;
	if (A == false)
	{
		cout << "Eror" << endl;
	}
	_itoa_s(A, tmp, 2);
	cout << "A: " << tmp << endl;
	_itoa_s((A & maskA) >> 1, tmp, 2);
	cout << "Выделенные биты: " << tmp;
}

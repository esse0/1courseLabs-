#include "stdafx.h"

using namespace std;

int sum(int first_number, int second_number);
int sub(int first_number, int second_number);
int mul(int first_number, int second_number);

int main()
{
    setlocale(0, "Rus");

    int frst, sec;
    
    cout << "Введите первое число: "; cin >> frst;
    cout << "\nВведите второе число: "; cin >> sec;

    if (cin.fail()) {
        cout << "\nОшибка...";
        exit(1);
    }
    else {
        cout<< "\nСумма: " << sum(frst, sec) << endl;
        cout << "\nРазность: " << sub(frst, sec) << endl;
        cout << "\nПроизведение: " << mul(frst, sec) << endl;
        system("pause");
    }
}

#include <iostream>
#include "case.h"

int main()
{
    setlocale(LC_CTYPE, "Rus");
    using namespace std;
    int option;
    print();
    cin >> option;
    switch (option)
    {
        case 1:
        {
            cout << "Разница кода символов английского алфавита";
            raznost();
            break;
        }
        case 2:
        {
            cout << "Разница кода символов русского алфавита";
            raznost();
            break;
        }
        case 3:
        {
            code_simvol();
            break;
        }
        case 4:
        {
            return 0;
        }
        default:
        {
            cout << "Введен неправильный вариант!!!";
            break;
        }
    }
    return 0;
}
#pragma once
using namespace std;

void switc() {
    int b, d;
    char f;
    cin >> b;
    switch (b)
    {
    case 1:
    {
        cout << "Разница кода символов русского алфавита";
        cout << "\n" << func();
        break;
    }
    case 2:
    {
        cout << "Разница кода символов латинского алфавита";
        cout << "\n" << func2();
        break;
    }
    case 3:
    {
        cout << "Сколько символов нужно ввести?: ";
        cin >> d;
        if (d) {
            for (int n = 1; n <= d; n++) {
                cout << "\nВведите символ код которого хотите узнать: \n";
                cin >> f;
                cout << int(f);
            }
        }
        else { cout << "НЕВЕРНОЕ ЗНАЧЕНИЕ!!!"; break; }
    }
    case 4:  break;
    default:  cout << "Введен неправильный вариант!!!"; break;
    }

}
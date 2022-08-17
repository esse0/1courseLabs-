//Задание 4 ДОП
#include <iostream>
int main()
{
    setlocale(LC_CTYPE, "Russian");
    using namespace std;
    int x, y, z, c;
    cout << "Введите первую диагональ отверстия:\n"; cin >> x;
    cout << "Введите вторую диагональ отверстия:\n"; cin >> y;
    cout << "Введите радиус окружности:\n"; cin >> z;
    if (x and y and z)
    {
        c = ((x * y) / 2 * sqrt((x * x) + (y * y)));
        if (z > c)
            cout << "Шар с данным радиусом не пройдет через данное отверстие";
        else
            cout << "Шар с данным радиусом пройдет через данное отверстие";
    }
    else
        cout << "\nНЕВЕРНЫЙ СИМВОЛ";
    return 0;
}
//Вариант 14
#include <iostream>
int main()
{
    setlocale(LC_CTYPE, "Russian");
    using namespace std;
    double a, b, c, d;
    cout << "Введите a:\n";
    cin >> a;
    cout << "Введите b:\n";
    cin >> b;
    cout << "Введите с:\n";
    cin >> c;
    if (a and b and c)
    {
        d = a;
        if (d < b) d = b;
        if (d < c) d = c;
        cout << "d=" << d;
    }
    else cout << "\nНЕВЕРНЫЙ СИМВОЛ";
    return 0;
}
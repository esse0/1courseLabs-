//Вариант3
#include <iostream>
int main()
{
    setlocale(LC_CTYPE, "Russian");
    using namespace std;
    double a, b, c, d;
    cout << "Введите а"; cin >> a;
    cout << "Введите b"; cin >> b;
    cout << "Введите c"; cin >> c;
    if (a and b and c)
    {
        if ((a * b * c) == 0)
            d = ((a + b + c) / 3);
        else
            d = pow((a * b * c), 1.0 / 3.0);
        cout << "sad=" << d;
    }
    else cout << "Введен некорректный символ";

    return 0;
}
//Основ3
#include <iostream>
using namespace std;
void main()
{
    setlocale(LC_CTYPE, "rus");
    float z, y, j, a, q;
    int n = 0;
    do
    {
        cout << "Введите j: ";
        cin >> j;
        cout << "\nВведите a: ";
        cin >> a;
        cout << "\nВведите y: ";
        cin >> y;
        if (a and j and y) {
            n++;
            z = pow(a + 1, 1 / 2) - tan(j + y);
            q = exp(-j * 0.1 * y) + (3 * 3 * z * z);
            cout << "z=" << z << "\t";
            cout << " q=" << q << endl;
        }
        else { cout << "\nНЕВЕРНОЕ ЗНАЧЕНИЕ!!!"; break; }
    } 
    while (n < 4);
}
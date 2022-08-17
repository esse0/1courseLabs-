//Доп 1
#include <iostream>
#include <math.h>

using namespace std;

int main() {
    setlocale(LC_ALL, "Rus");
    int a, res, k = 0;
    double sum = 0;
    cout << "Введите любое целое число: ";
    cin >> a;
    if (a and a and a) {
        while (a != 0) {
            res = a % 10;
            if (res != 3 && res != 6) {
                sum += res * pow(10, k);
                k++;
            }
            a /= 10;
        }
        cout << "Число без 3 и 6: " << sum;
    }
    else { cout << "\nНЕВЕРНОЕ ЗНАЧЕНИЕ!!!"; }
}


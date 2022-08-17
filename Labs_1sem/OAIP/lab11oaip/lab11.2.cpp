//Задание 15.2 Установить в 0 n битов в числе А влево от позици

#include <iostream>

using namespace std;

void main() {
    setlocale(LC_CTYPE, "Russian");
    char tmp[33];
    std::cout << "Введите число: ";
    int A;
    std::cin >> A;
    if (A and A) {

        _itoa_s(A, tmp, 2);
        std::cout << "Число в двоичном виде = " << tmp << '\n';

        std::cout << "Сколько битов изменить: ";
        int n;
        std::cin >> n;
        if (n and n) {

            int p = -1;
            while (p < 1)
            {
                std::cout << "Выберите позицию: ";
                std::cin >> p;
            }
            unsigned int mask = (1 << n) - 1;
            A &= ~(mask << (p - 1));

            _itoa_s(A, tmp, 2);
            std::cout << "\nЧисло после: " << tmp;
        }
        else { cout << "Символ введен некорректно!"; };
    }
    else { cout << "Символ введен некорректно!"; }
}
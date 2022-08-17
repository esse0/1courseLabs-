//Основное 1

#include <iostream>

void main()
{
    using namespace std;
    setlocale(LC_CTYPE, "Rus");
    float y = -1.55, a = 6, j, z, q;
    for(int n = 0; n < 4; n++)
    {
        printf("Введите j: ");
        cin >> j;
        if (j and j and j) {
            z = pow(a + 1, 1 / 2) - tan(j + y);
            q = exp(-j * 0.1 * y) + (3 * 3 * z * z);
            printf("z = %5.2f\t", z);
            printf("q = %5.2f\n", q);
        }
        else { printf("\n НЕВЕРНОЕ ЗНАЧЕНИЕ!!!"); break; }
    }
}
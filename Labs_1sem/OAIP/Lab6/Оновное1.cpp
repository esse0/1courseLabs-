//Оснв1 
#include <iostream>
#include <stdio.h>
void main()
{
    setlocale(LC_CTYPE, "Russian");
    float y = -1.55, a = 6, j, z, q;
    int n = 0;
    for (n < 4; n++;)
    {
        printf("Введите j ");
        scanf_s("%f", &j);
        z = pow(a + 1, 1 / 2) - tan(j + y);
        q = exp(-j * 0.1 * y) + (3 * 3 * z * z);
        printf("z = %5.2f\t", z);
        printf("q = %5.2f\n", q);
    }
}
#include <iostream>
//Задание 3
int main()
{
    double d, f, i = -6, x = 4.5, z = 1.5e-6;
    d = tan(-x * i) / sqrt(x - z);
    f = sin(2 * d) / d;
    std::cout << "d =" << d;
    std::cout << " f =" << f;
}
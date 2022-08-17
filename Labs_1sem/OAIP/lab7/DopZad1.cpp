//2 ДопЗадание
#include <iostream>


void main()
{
    int a = 0, k50 = 0, k20 = 0, k5 = 0, k2 = 0, r = 100;
    for (k50; k50 <= 2; k50++) {
        for (k20 = 0; k20 <= 5; k20++) {
            for (k5 = 0; k5 <= 20; k5++) {
                for (k2 = 0; k2 <= 50; k2++) {
                    if (r == k50 * 50 + k20 * 20 + k5 * 5 + k2 * 2)
                        a++;
                }
            }
        }
    }
    std::cout << a;
}
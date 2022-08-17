//Дана строка символов, состоящая из букв, цифр, запятых, точек,
//знаков « + » и «–».Найти количество запятых и точек.

#include <iostream>

using namespace std;

void main()
{
    setlocale(LC_CTYPE, "Rus");
    char t[90];
    int i, n, zap = 0, toch = 0;
    cout << "Input string: ";
    gets_s(t);
    n = strlen(t);
    for (i = 0; i <= n; i++)
    {
        if (t[i] == ',')
        {
            zap += 1;
        }
        if (t[i] == '.')
        {
            toch += 1; 
        }
    }
    cout << "Текст содержит " << zap << " запятых и " << toch << " точек.";
}
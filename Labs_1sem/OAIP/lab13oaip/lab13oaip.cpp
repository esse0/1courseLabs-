//Из текста удалить те его части, которые заключены в кавычки (вместе с кавычками).

#include <iostream>
using namespace std;

void main()
{
    setlocale(LC_CTYPE, "Rus");
    char t[90];
    int i, n, min = -1, max = -1;
    cout << "Input string: ";
    gets_s(t);
    n = strlen(t);
    for (i = 0; i <= n; i++)
    {
        if (t[i] == '"')
        {
            min = i;
            break;
        }
    }
    for (i = 0; i <= n; i++)
    {
        if (t[i] == '"')
        {
            max = i;
        }
    }
    if (min >= 0 and max >= 0)
    {
        for (i = 0; i <= n; i++)
        {
            for (min; max >= min; max--)
            {
                t[max] = 0;
            }
        }
    }
    for (i = 0; i <= n; i++)
    {
        cout << t[i];
    }
}



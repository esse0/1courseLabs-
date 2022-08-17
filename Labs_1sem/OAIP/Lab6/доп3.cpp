//Доп 3

#include <iostream>
int main()
{
    setlocale(LC_CTYPE, "Rus");
    using namespace std;
    float x, y, z = 1;
    cout << "Сколько фирма должна получить за один день?: ";
    cin >> x;
    if (x)
    {
        cout << "\nСколько фирма выручила денег за свой первый рабочий день?: ";
        cin >> y;
        if (y)
        {
            while (y < x)
            {
                z++;
                y = y * 1.03;
            }

        }
        else
        {
            cout << "Введено некорректное число!!!";
            return 0;
        }

    }
    else
    {
        cout << "Введено некорректное число!!!";
        return 0;
    }
    cout << "\nДля достижения цели фирме понадобилось " << z << " дня\n";
    cout << "\nВыручка в " << z << " день составила " << y << " тысяч рублей\n";
    return 0;
}
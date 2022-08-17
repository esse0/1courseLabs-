#include <iostream>

using namespace std;

bool OpredVisokosGoda(int);
int DayNumberInYear(int day, int month, int daysInMonth[12]);
int get_date(int date, int day, int month, int years, int daysInMonth[12]);

int main()
{
    setlocale(LC_ALL, "Russian");

    int date;
    int bithday;
    int bithNumber;
    int Number;
    int daysInMonth[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };

    while (true)
    {
        cout << "Введите дату(ДДММГГГГ): ";
        cin >> date;

        int day = date / 1000000;
        int month = (date % 1000000) / 10000;
        int years = date % 10000;

        if (get_date(date, day, month, years, daysInMonth)) {
            cout << "\nДата введена некорректно...\n";
            continue;
        }

        Number = DayNumberInYear(day, month, daysInMonth);

        cout << "\n--------------------------------\n";
        cout << "Номер дня в году: " << Number << "\n";

        if (daysInMonth[1] == 29) {
            cout << "\nГод високосный\n";
        }
        else {
            cout << "\nГод не високосный\n";
        }
        cout << "\n--------------------------------\n";

        while (true) {
            cout << "Введите дату рождения: "; cin >> bithday;

            day = bithday / 1000000;
            month = (bithday % 1000000) / 10000;

            if (get_date(bithday, day, month, years, daysInMonth)) {
                cout << "\nДата введена некорректно...\n";
                continue;
            }

            bithNumber = DayNumberInYear(day, month, daysInMonth);
            break;
        }

        if (bithNumber > Number) { cout << "\nДо вашего дня рождения - " << bithNumber - Number << " дней."; }
        else if (bithNumber < Number) {

            if (OpredVisokosGoda(years + 1) && month > 2) {
                cout << "\nДо вашего дня рождения - " << 366 - (Number - bithNumber) << " дней.";
            }
            else {
                cout << "\nДо вашего дня рождения - " << 365 - (Number - bithNumber) << " дней.";
            }
        }
        else { cout << "\nДо вашего дня рождения - " << 0 << " дней."; }

        break;
    }
    cout << "\n\n___Программа завершена___\n";
    system("pause");

}

int get_date(int date, int day, int month, int years, int daysInMonth[12]) {

    int days = 0;

    daysInMonth[1] = OpredVisokosGoda(years) ? 29 : daysInMonth[1];

    if (month > 0 && month <= 12) {
        days = daysInMonth[month - 1];
    }


    if (cin.fail() || day < 1 || day > days || years < 0001 || years > 9999 || month > 12 || month < 1 || date / 100000000 != 0) {
        cin.clear();
        cin.ignore();
        return true;
    }
    else {
        return false;
    }
}

bool OpredVisokosGoda(int year) {
    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0) {
                return true;
            }
            else {
                return false;
            }
        }
        else {
            return true;
        }
    }
    else {
        return false;
    }
}

int DayNumberInYear(int day, int month, int daysInMonth[12])
{
    int NumberDay = 0;

    for (int i = 0; i < month - 1; i++) {
        NumberDay += daysInMonth[i];
    }

    NumberDay += day;
    
    return NumberDay;
}

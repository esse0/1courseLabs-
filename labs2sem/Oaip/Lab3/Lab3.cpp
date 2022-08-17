
// Записная книжка. Ф.И.О, дата рождения, адрес, телефон, место работы или учебы, должность. Поиск по фамилии. 
// Дату рождения реализовать с помощью битового поля.


#include <iostream>
#include <windows.h>
using namespace std;
const int SiZE = 15;
void init_list(),
enter(),
input(int i),
display(),
clean(),
search();

int menu();
enum Position
{
    chief_product_officer = 1,
    chief_marketing_officer,
    chief_audit_executive,
    chief_administrative_officer,
    chief_human_resources_officer,
    chief_security_officer,
    chief_software_architect
};

struct NOTEBOOK
{
    
    char work[15];
    char specialty[40];
    char adress[40];
    int number;
    Position position1;

    struct
    {
        unsigned short day : 5;   //5 бит для дня
        unsigned short month : 4; //4 для месяца
        unsigned short year : 7;  //7 для года от 0 до 99
    }bday;

    struct FIO{
        char name[30];
        char sname[30];
        char oname[50];
    }name;

}person[SiZE];
//struct bday d; //объявляем переменную этого типа с битовыми полями

int main()
{
    setlocale(LC_ALL, "Russian");
    init_list();
    char choice;
    for (;;)
    {
        choice = menu();
        switch (choice)
        {
        case '1': enter();
            break;
        case '2': display();
            break;
        case '3': clean();
            break;
        case '4': search();
            break;
        case '0': return 0;
        }
    }
    return 0;
}
void init_list()
{
    int t;
    for (t = 0; t < SiZE; t++) {
        *person[t].name.name = '\0';
        *person[t].name.sname = '\0';
        *person[t].name.oname = '\0';
    }
}
int menu()
{
    char ch;
    do
    {
        cout << "1. Ввести данные\n";
        cout << "2. Отобразить данные\n";
        cout << "3. Удалить данные\n";
        cout << "4. Поиск информации\n";
        cout << "0. Выйти из программы\n";
        cout << "Выберите команду: ";
        cin >> ch;
    } while (!isdigit(ch));
    return ch;
}
void enter()
{
    int i;
    for (i = 0; i < SiZE; i++)
        if (!*person[i].name.name) break;
    input(i);
}
void input(int i)
{
    int j = 0;

    getchar();
    cout << "Фамилия: ";
    cin.getline(person[i].name.sname, 30);
    cout << "Имя: ";
    cin.getline(person[i].name.name, 30);
    cout << "Отчество: ";
    cin.getline(person[i].name.oname, 40);
    cout << "Адрес: ";
    cin.getline(person[i].adress, 40);
    cout << "Место работы: ";
    cin.getline(person[i].work, 15);
    cout << "Должность: ";
    cin.getline(person[i].specialty, 40);
    cout << "Должность: " << endl;

    cout << "\t 1) руководитель производственного отдела / директор по закупкам " << endl;
    cout << "\t 2) директор по маркетингу " << endl;
    cout << "\t 3) старший ревизор " << endl;
    cout << "\t 4) директор по административным вопросам " << endl;
    cout << "\t 5) ведущий эксперт отдела кадров " << endl;
    cout << "\t 6) начальник службы безопасности " << endl;
    cout << "\t 7) руководитель отдела разработок программного обеспечения " << endl;

    int ENTER;
    cin >> ENTER;
    person[i].position1 = Position(ENTER);

    cout << "Рабочий номер телефона: ";
    cin >> person[i].number;
    cout << "Дата рождения: ";
    cout << "Введите день (1-31):" << '\t'; cin >> j; person[i].bday.day = j;
    cout << "Введите месяц (1-12):" << '\t'; cin >> j; person[i].bday.month = j;
    cout << "Введите год (00-99) :" << '\t'; cin >> j; person[i].bday.year = j;
    cout << endl;
}

void display()
{

    int i;
    for (i = 0; i < SiZE; i++)
    {
        if (*person[i].name.name)
        {
            cout << "Ф.И.О: " << person[i].name.sname << " " << person[i].name.name << " " << person[i].name.oname << endl;
            cout << "Адрес: " << person[i].adress << endl;
            cout << "Место работы: " << person[i].work << endl;
            cout << "Должность: " << person[i].position1 << endl;
            cout << "Рабочий номер телефона: " << person[i].number << endl;
            cout << "Дата рождения: ";
            cout << person[i].bday.day << ".";
            cout << person[i].bday.month << ".";
            cout << person[i].bday.year << endl;
        }
    }
}
void clean()
{
    int i;
    for (i = 0; i < SiZE; i++)
    {
        *person[i].name.name = '\0'; *person[i].name.sname = '\0'; *person[i].name.oname = '\0';
        *person[i].adress = '\0';
        *person[i].work = '\0';

        person[i].number = '\0';
        person[i].bday.day = '\0';
        person[i].bday.month = '\0';
        person[i].bday.year = '\0';
    }
}
void search()
{
    string name, num;
    cout << "Введите фамилию: ";
    cin >> name;
    for (int i = 0; i < SiZE; i++)
    {
        if (person[i].name.sname == name)
        {
            cout << "Ф.И.О: " << person[i].name.sname << " " << person[i].name.name << " " << person[i].name.oname << endl;
            cout << "Адрес: " << person[i].adress << endl;
            cout << "Место работы: " << person[i].work << endl;
            cout << "Должность: " << person[i].position1 << endl;
            cout << "Рабочий номер телефона: " << person[i].number << endl;
            cout << "Дата рождения: ";
            cout << person[i].bday.day << ".";
            cout << person[i].bday.month << ".";
            cout << person[i].bday.year << endl;
        }
    }
}


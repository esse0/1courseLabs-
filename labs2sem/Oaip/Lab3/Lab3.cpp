
// �������� ������. �.�.�, ���� ��������, �����, �������, ����� ������ ��� �����, ���������. ����� �� �������. 
// ���� �������� ����������� � ������� �������� ����.


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
        unsigned short day : 5;   //5 ��� ��� ���
        unsigned short month : 4; //4 ��� ������
        unsigned short year : 7;  //7 ��� ���� �� 0 �� 99
    }bday;

    struct FIO{
        char name[30];
        char sname[30];
        char oname[50];
    }name;

}person[SiZE];
//struct bday d; //��������� ���������� ����� ���� � �������� ������

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
        cout << "1. ������ ������\n";
        cout << "2. ���������� ������\n";
        cout << "3. ������� ������\n";
        cout << "4. ����� ����������\n";
        cout << "0. ����� �� ���������\n";
        cout << "�������� �������: ";
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
    cout << "�������: ";
    cin.getline(person[i].name.sname, 30);
    cout << "���: ";
    cin.getline(person[i].name.name, 30);
    cout << "��������: ";
    cin.getline(person[i].name.oname, 40);
    cout << "�����: ";
    cin.getline(person[i].adress, 40);
    cout << "����� ������: ";
    cin.getline(person[i].work, 15);
    cout << "���������: ";
    cin.getline(person[i].specialty, 40);
    cout << "���������: " << endl;

    cout << "\t 1) ������������ ����������������� ������ / �������� �� �������� " << endl;
    cout << "\t 2) �������� �� ���������� " << endl;
    cout << "\t 3) ������� ������� " << endl;
    cout << "\t 4) �������� �� ���������������� �������� " << endl;
    cout << "\t 5) ������� ������� ������ ������ " << endl;
    cout << "\t 6) ��������� ������ ������������ " << endl;
    cout << "\t 7) ������������ ������ ���������� ������������ ����������� " << endl;

    int ENTER;
    cin >> ENTER;
    person[i].position1 = Position(ENTER);

    cout << "������� ����� ��������: ";
    cin >> person[i].number;
    cout << "���� ��������: ";
    cout << "������� ���� (1-31):" << '\t'; cin >> j; person[i].bday.day = j;
    cout << "������� ����� (1-12):" << '\t'; cin >> j; person[i].bday.month = j;
    cout << "������� ��� (00-99) :" << '\t'; cin >> j; person[i].bday.year = j;
    cout << endl;
}

void display()
{

    int i;
    for (i = 0; i < SiZE; i++)
    {
        if (*person[i].name.name)
        {
            cout << "�.�.�: " << person[i].name.sname << " " << person[i].name.name << " " << person[i].name.oname << endl;
            cout << "�����: " << person[i].adress << endl;
            cout << "����� ������: " << person[i].work << endl;
            cout << "���������: " << person[i].position1 << endl;
            cout << "������� ����� ��������: " << person[i].number << endl;
            cout << "���� ��������: ";
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
    cout << "������� �������: ";
    cin >> name;
    for (int i = 0; i < SiZE; i++)
    {
        if (person[i].name.sname == name)
        {
            cout << "�.�.�: " << person[i].name.sname << " " << person[i].name.name << " " << person[i].name.oname << endl;
            cout << "�����: " << person[i].adress << endl;
            cout << "����� ������: " << person[i].work << endl;
            cout << "���������: " << person[i].position1 << endl;
            cout << "������� ����� ��������: " << person[i].number << endl;
            cout << "���� ��������: ";
            cout << person[i].bday.day << ".";
            cout << person[i].bday.month << ".";
            cout << person[i].bday.year << endl;
        }
    }
}


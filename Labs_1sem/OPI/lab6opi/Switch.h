#pragma once
using namespace std;

void switc() {
    int b, d;
    char f;
    cin >> b;
    switch (b)
    {
    case 1:
    {
        cout << "������� ���� �������� �������� ��������";
        cout << "\n" << func();
        break;
    }
    case 2:
    {
        cout << "������� ���� �������� ���������� ��������";
        cout << "\n" << func2();
        break;
    }
    case 3:
    {
        cout << "������� �������� ����� ������?: ";
        cin >> d;
        if (d) {
            for (int n = 1; n <= d; n++) {
                cout << "\n������� ������ ��� �������� ������ ������: \n";
                cin >> f;
                cout << int(f);
            }
        }
        else { cout << "�������� ��������!!!"; break; }
    }
    case 4:  break;
    default:  cout << "������ ������������ �������!!!"; break;
    }

}
#pragma once

using namespace std;
int first_result, second_result;
char symbol, first_letter = '�', second_letter = '�';

void raznost() {
    first_result = int(second_letter) - int(first_letter);
    cout << "\n" << first_result;
}

void code_simvol() {
    cout << "������� ������ ��� �������� ������ ������: ";
    cin >> symbol;
    cout << int(symbol);
}

void print() {
    cout << "1 � ����������� ������� �������� ����� � Windows-1251 ����� ���������� �������� � ��������� � �������� ���������.\n";
    cout << "2 � ����������� ������� �������� ����� � Windows-1251 ����� �������� �������� � ��������� � �������� ���������.\n";
    cout << "3 � ����� � ������� ���� �������, ���������������� ��������� �����. \n";
    cout << "4 � ����� �� ���������.\n";
    cout << "�������� ���� �� ������������ ���������: ";
}
#pragma once

using namespace std;
int first_result, second_result;
char symbol, first_letter = 'А', second_letter = 'а';

void raznost() {
    first_result = int(second_letter) - int(first_letter);
    cout << "\n" << first_result;
}

void code_simvol() {
    cout << "Введице символ код которого хотите узнать: ";
    cin >> symbol;
    cout << int(symbol);
}

void print() {
    cout << "1 – Определение разницы значений кодов в Windows-1251 буквы латинского алфавита в прописном и строчном написании.\n";
    cout << "2 – Определение разницы значений кодов в Windows-1251 буквы русского алфавита в прописном и строчном написании.\n";
    cout << "3 – Вывод в консоль кода символа, соответствующего введенной цифре. \n";
    cout << "4 – Выход из программы.\n";
    cout << "Выберите один из предложенных вариантов: ";
}
﻿//2. Латинским квадратом порядка n называется квадратная таблица размером nхn, каждая 
//строка и каждый столбец которой содержат все числа от 1 до n. Для заданного
// n в матрице L(n, n) построить латинский квадрат порядка n. 
#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_CTYPE, "rus");
    cout << "Латинским квадратом порядка n называется квадратная таблица размером nхn, каждая строка и каждый столбец которой со-держат все числа от 1 до n. Для заданного n в матрице L(n, n) построить латинский квадрат порядка n.\n\n";
    cout << "Введите n = ";
    const int row = 20;
    int n;
    cin >> n;
    if (n == false) {
        cout << "Введен некорректный символ";
    }
    int arr[row][row];
    for (int i = 0; i < n; i++)
    {
        int a = i + 1;
        for (int j = 0; j < n; j++)
        {
            arr[i][j] = a;
            a++;
            if (a > n) a = 1;
        }
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}



//8.Дана целочисленная прямоугольная матрица.Определить номер первого из столбцов, содержащих хотя бы один нулевой элемент.
#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
    srand(time(NULL));
    setlocale(LC_ALL, "rus");
    cout << "Дана целочисленная прямоугольная матрица.Определить номер первого из столбцов, содержащих хотя бы один нулевой элемент.";
    int a, b, sum = 0, i, j;
    cout << "Введите количество строк: ";
    cin >> a;
    if (a <= 0)
    {
        cout << "Введен некорректный символ или число" << endl;
        return 0;
    }
    cout << "Введите количество столбцов: ";
    cin >> b;
    if (b <= 0)
    {
        cout << "Введен некорректный символ или число" << endl;
        return 0;
    }
    int** matr = new int* [a];
    for (int i = 0; i < a; i++) {
        matr[i] = new int[b];
    }
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            matr[i][j] = rand() % 10;
            cout << matr[i][j] << "\t";
        }
        cout << endl;
    }
    for (j = 0; j < a; j++)
    {
        for (i = 0; i < b; i++)
        {
            if (matr[i][j] == 0) {
                cout << "0 в колонке: " << j + 1 << endl;
                break;
            }
        }
    }
    for (int i = 0; i < a; i++) {
        delete[] matr[i];
    }
    delete[] matr;
    return 0;
}
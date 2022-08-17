//8.Задан массив A из n элементов.Найти количество элементов этого массива, больших среднего арифметического всех его элементов.
#include <iostream>
using namespace std;
int main() {
    setlocale(LC_ALL, "ru");
    int a, b, sum = 0;
    cout << "Задан массив A из n элементов.Найти количество элементов этого массива, больших среднего арифметического всех его элементов.";
    cout << "Введите количество строк массива: ";
    cin >> a;
    if (a <= 0)
    {
        cout << "Введен некорректный символ или число" << endl;
        return 0;
    }
    cout << "Введите количество столбцов массива: ";
    cin >> b;
    if (b <= 0) {
        cout << "Введен некорректный символ или число" << endl;
        return 0;
    }

    int** matr = new int* [a];  //дин.массив
    for (int i = 0; i < a; i++) {
        matr[i] = new int[b];
    }
    srand(time(NULL));
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            matr[i][j] = rand() % 101;
            cout << matr[i][j] << "\t";
            sum += matr[i][j];
        }
        cout << endl;
    }
    int average = sum / a / b;
    cout << endl << "среднее значение: " << average << endl;
    int cnt;
    for (int i = 0; i < a; i++) {
        cnt = 0;
        for (int j = 0; j < b; j++) {
            if (matr[i][j] > average) cnt++;
        }
        cout << "ряд " << i + 1 << ": " << cnt << endl;
    }
    for (int i = 0; i < a; i++) {
        delete[] matr[i];
    }
    delete[] matr;
    return 0;
}

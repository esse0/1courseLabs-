//Задан массив A из n элементов. Подсчитать, сколько раз встречается в нем максимальное число.
#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    int* arr;
    int dim, max, max_cnt = 1;
    cout << "Задан массив A из n элементов. Подсчитать, сколько раз встречается в нем максимальное число";
    cout << "\nВведите размер массива: ";
    cin >> dim;
    if (dim <= 0) {
        cout << "Введен некорректный символ или число" << endl;
        return 0;
    }
    arr = new int[dim];
    for (int i = 0; i < dim; i++)
        cout << (arr[i] = rand() % 10) << " ";
    max = arr[0];
    for (int i = 1; i < dim; i++)
        if (max == arr[i]) max_cnt++;
        else if (max < arr[i]) max = arr[i], max_cnt = 1;

    cout << endl << "Максимальный элемент массива = " << max << endl << "кол-ва этого элемента в массиве = " << max_cnt << endl;
    return 0;
    delete[] arr;//удаляет память 
}
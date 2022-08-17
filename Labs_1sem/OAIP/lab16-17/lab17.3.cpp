//Дана целочисленная квадратная матрица. Если она не содержат отрицательных элементов,
// то определить произведение элементов в тех строках, где отрицательные элементы отсутствуют.
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    setlocale(0, "rus");
    srand(time(0));
    int n;
    cout << "n="; cin >> n;
    int** a = new int* [n];
    for (int i = 0; i < n; i++)
        a[i] = new int[n];
    for (int i = 0; i < n; i++)
    {
        int p = 1, k = 0;
        for (int j = 0; j < n; j++)
        {
            a[i][j] = rand() % 12 - 2;
            cout << setw(2) << a[i][j] << " ";
            if (a[i][j] >= 0) p *= a[i][j];
            else k++;
        }
        if (k == 0) cout << " " << p;
        else cout << "там есть отрицательный элемент";
        cout << endl;
    }
    for (int i = 0; i < n; i++)
        delete[] a[i];
    delete[] a;
    return 0;
}
//В одномерном массиве найти минимальный и максимальный элементы. Вычислить их разность.
//#include <iostream> 
//using namespace std;
//int main()
//{
//    setlocale(0, "rus");
//    srand(time(NULL));
//    const int N = 5; // размер массива
//    int i, min_val, max_val;
//    int index_min = 0;
//    int index_max = 0;
//    int sum = 0;
//    int nums[N];
//    for (i = 0; i < N; i++)
//        nums[i] = rand() % 10;
//    for (i = 0; i < N; i++)cout << "Это элемент массива[" << i << "]: " << nums[i] << endl;
//    min_val = max_val = nums[0];
//    for (i = 1; i < N; i++)
//    {
//        if (nums[i] < min_val)
//        {
//            min_val = nums[i];
//            index_min = i;
//        }
//        if (nums[i] > max_val)
//        {
//            max_val = nums[i];
//            index_max = i;
//        }
//    };
//    cout << "Номер элемента массива с минимальным значением : " << index_min << "(" << min_val << ")" << endl;
//    cout << "Номер элемента массива с максимальным значением: " << index_max << "(" << max_val << ")" << endl;
//    sum = max_val - min_val;
//    cout << "Разность:  " << sum;
//    return 0;
//}
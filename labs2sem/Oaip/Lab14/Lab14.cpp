//Ввести массив А. В массив В скопировать элементы массива А, имеющие четный индекс. 
//Массив В отсортировать по возрастанию, используя алгоритмы сортировок: «пузырек», сортировка выбором. 

#include <iostream>
#include <cstdlib>
#include <ctime> 
#include <chrono>

using namespace std;

void bubbleSort(int a[], int n);
void selectSort(int A[], int size);

void main() {
    setlocale(LC_ALL, "rus");
    int A[2000], B[2000];
    srand(time(NULL));
    cout << "A:";
    for (int i = 0; i < 2000; i++)
    {
        A[i] = 10 + rand() % 40;

        cout << A[i] << " ";

    }
    cout << endl;
    cout << "B:";
    for (int i = 0, t = 0; i < 1000; i++, t = t + 2)
    {
        B[i] = A[t];
        cout << B[i] << " ";
    }
    cout << endl;
    cout << endl;
    auto begin = std::chrono::steady_clock::now();
    selectSort(B, 1000);
    auto end = std::chrono::steady_clock::now();
    auto elapsed_ms = std::chrono::duration_cast<std::chrono::milliseconds>(end - begin);
    cout << "\nВремя сортировки выбором: " << elapsed_ms.count() << " мс" << endl;

    cout << "Отсортированный массив " << "B:";
    for (int i = 0; i < 1000; i++)
    {
        cout << B[i] << " ";
    }

    cout << endl;
    auto begin1 = std::chrono::steady_clock::now();
    bubbleSort(B, 1000);
    auto end1 = std::chrono::steady_clock::now();
    auto elapsed_ms1 = std::chrono::duration_cast<std::chrono::milliseconds>(end1 - begin1);
    cout << "\nВремя сортировки пузырьком: " << elapsed_ms.count() << " мс" << endl;
    cout << "Отсортированный массив " << "B:";
    for (int i = 0; i < 1000; i++)
    {

        cout << B[i] << " ";


    }
    



}

void bubbleSort(int a[], int n)
{
    int i, j, t;
    for (i = 1; i < n; i++)
        for (j = n - 1; j >= i; j--)
            if (a[j - 1] > a[j])
            {
                t = a[j - 1];
                a[j - 1] = a[j];
                a[j] = t;
            }
}

void selectSort(int A[], int size)
{
    int k, i, j;
    for (i = 0; i < size - 1; i++)
    {
        for (j = i + 1, k = i; j < size; j++)
            if (A[j] < A[k])
                k = j;
        int c = A[k];
        A[k] = A[i];
        A[i] = c;
    }
}




#include <iostream>
#include <ctime>

void PuzSort(int* arr, int size);
void VstavkSort(int* arr, int size);
void SelectionSort(int* arr, int size);
void FastSort(int* arr, int first, int last);

using namespace std;

int main()
{
    setlocale(LC_ALL,"Rus");

    int N;
    srand(time(NULL));

    cout << "Введите число значений: "; cin >> N;
    if (N < 1) {
        cout << "\nЗначение введено неверно";
        exit(1);
    }

    system("cls");

    int* A = new int[N];
    int* B = new int[N];
    int* C = new int[N];
    int* D = new int[N];
    int* E = new int[N];

    cout << "\nМассив: {";
    for (int i = 0; i < N; i++) {
            A[i] = rand() % 10 + 1;
            B[i] = A[i];
            C[i] = A[i];
            D[i] = A[i];
            E[i] = A[i];
            cout << A[i];
            if (i < N - 1 ) cout << ", ";
    }
    cout << "}\n";


    cout << "\n_______Сортировка пузырьком_______\n";

    int start_time1 = clock();
    PuzSort(B, N);
    int end_time1 = clock();
    int search_time1 = end_time1 - start_time1;

    cout << "\nОтсортированный  массив: {";
    for (int i = 0; i < N; i++) {
        cout << B[i];
        if (i < N - 1) cout << ", ";
    }
    cout << "}";
    

    cout << "\n\n_______Сортировка Вставкой_______\n";

    int start_time2 = clock();
    VstavkSort(C, N);
    int end_time2 = clock();
    int search_time2 = end_time2 - start_time2;

    cout << "\nОтсортированный  массив: {";
    for (int i = 0; i < N; i++) {
        cout << C[i];
        if (i < N - 1) cout << ", ";
    }
    cout << "}";

    cout << "\n\n_______Быстрая сортировка_______\n";

    int start_time3 = clock();
    FastSort(E, 0, N - 1);
    int end_time3 = clock();
    int search_time3 = end_time3 - start_time3;

    cout << "\nОтсортированный  массив: {";
    for (int i = 0; i < N; i++) {
        cout << E[i];
        if (i < N - 1) cout << ", ";
    }
    cout << "}";

    cout << "\n\n_______Сортировка выбором_______\n";

    int start_time4 = clock();
    SelectionSort(D, N);
    int end_time4 = clock();
    int search_time4 = end_time4 - start_time4;
    
    cout << "\nОтсортированный  массив: {";
    for (int i = 0; i < N; i++) {
        cout << D[i];
        if (i < N - 1) cout << ", ";
    }
    cout << "}";

    cout << "\n\nВремя сортировки пузырьком: " << search_time1 << " мс";
    cout << "\n\nВремя сортировки вставкой: " << search_time2 << " мс";
    cout << "\n\nВремя сортировкой выбором: " << search_time4 << " мс";
    cout << "\n\nВремя быстрой сортировки: " << search_time3 << " мс";
}

void PuzSort(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {

                arr[j] += arr[j + 1];
                arr[j + 1] = arr[j] - arr[j + 1];
                arr[j] -= arr[j + 1];

            }
        }
    }
}

void VstavkSort(int *arr, int size) {

    for (int i = 1; i < size; i++)
    {
        for (int j = i; j > 0 && arr[j - 1] > arr[j]; j--)
        {
            swap(arr[j - 1], arr[j]);
        }
    }
}

void SelectionSort(int *arr, int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        int min_index = i;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[min_index])
            {
                min_index = j;
            }
        }
        if (min_index != i)
        {
            swap(arr[i], arr[min_index]);
        }
    }
}

void FastSort(int* arr, int first, int last) {
    int mid, count;
    int f = first, l = last;
    mid = arr[(f + l) / 2];
    do
    {
        while (arr[f] < mid) f++;
        while (arr[l] > mid) l--;
        if (f <= l)
        {
            count = arr[f];
            arr[f] = arr[l];
            arr[l] = count;
            f++;
            l--;
        }
    } while (f < l);
    if (first < l) FastSort(arr, first, l);
    if (f < last) FastSort(arr, f, last);
}
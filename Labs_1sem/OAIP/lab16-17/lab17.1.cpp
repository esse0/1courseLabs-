//// Найти сумму минимального и максимального элементов одномерного массива.
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
//    nums[i] = rand() % 10;
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
//    sum = min_val + max_val;
//    cout << "Сумма максимального и минимального значения:  " << sum;
//    return 0;
//}
//В массиве из целых чисел определить сумму элементов, расположенных между первым и последним нулевы-ми элементами
#include <iostream>
using namespace std;
void main()
{
    setlocale(0, "rus");
    int a[20], n, i, k = 0, s = 0, p = 0;
    cout << " Введите размер массива N(<= 20) ";
    cin >> n;
    if (n < 0) {
        cout << "Введен некорректный символ" << endl;
        return;
    }
    if (n == 0) {
        cout << "Введен некорректный символ" << endl;
        return;
    }
    cout << " Массив A" << endl;
    for (i = 0; i < n; i++)
    {
        cout << " a[ " << i + 1 << " ] = ";
        cin >> a[i];
    }
    for (i = 0; i < n; i++)
    {
        if (a[i] == 0)
        {
            k = i;
            break;
        }
    }
    for (i = n - 1; i >= 0; i--)
        if (a[i] == 0)
        {
            p = i;
            break;
        }
    for (i = k; i <= p; i++)
    {
        s = s + a[i];
    }
    cout << "Сумма = " << s << endl;
    return;
}
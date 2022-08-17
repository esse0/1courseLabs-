//Задан массив A из n элементов. Подсчитать, сколько раз встречается в нем максимальное число.
#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    int* arr;
    int dim, max, max_cnt = 1;

    cout << "Размер массива ";
    cin >> dim;
    if (dim < 0) {
        cout << "введен некорректный символ" << endl;
        return 0;
    }
    if (dim == 0) {
        cout << "введен некорректный символ" << endl;
        return 0;
    }
    arr = new int[dim]; //дин. массив 
    for (int i = 0; i < dim; i++)
        cout << (arr[i] = rand() % 10) << " ";
    max = arr[0];
    for (int i = 1; i < dim; i++)
        if (max == arr[i]) max_cnt++;
        else if (max < arr[i]) max = arr[i], max_cnt = 1;

    cout << endl << "Максимальный= " << max << endl << "Максимальное количество,которое встречается в массиве = " << max_cnt << endl;
    return 0;
    delete[] arr;//удаляет память 
}
//Написать программу, которая вводит несколько слов текста и определяет общее количество слов. Слова разде-лены пробелами.
//#include <iostream>
//using namespace std;
//int main()
//{
//    char s[80];
//    int slovo, count = 0;
//    system("chcp 1251");
//    system("cls");
//    cout << "Введите строку: " << endl;
//    cin.get(s, 80);
//    int i = 0;
//    while (s[i] == ' ' && s[i] != '\0')
//        i++;
//    slovo = 0;
//    while (s[i] != '\0') {
//        if (s[i] != ' ' && slovo == 0)
//        {
//            slovo = 1;
//            count++;
//        }
//        else if (s[i] == ' ')
//            slovo = 0;
//        i++;
//    }
//    cout << "Количество слов в строке " << count;
//    cin.get(); cin.get();
//    return 0;
//}
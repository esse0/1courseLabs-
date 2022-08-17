//Дан двумерный массив.В каждой строке выбрать минимальный элемент и среди них максимальный.Напечатать номер строки, в которой расположен этот элемент.
#include <iostream> 
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    const int n = 5;
    int a[n][n];
    srand(time(0));
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            a[i][j] = rand() % 10;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
            cout << a[i][j] << " ";
        cout << endl;
    }
    for (int i = 0; i < n; ++i)
    {
        int min = a[i][0];
        for (int j = 1; j < n; ++j)
            if (a[i][j] < min)
                min = a[i][j];
        cout << "Мин значение в " << i + 1 << " строке = " << min << endl;
    }
    cout << endl;
    for (int j = 0; j < n; ++j)
    {
        int max = a[0][j];
        for (int i = 0; i < n; ++i)
            if (a[i][j] > max)
                max = a[i][j];
        cout << "Макс значение в " << j + 1 << " столбце = " << max << endl;
    }
}
//Написать программу, которая вводит несколько строк текста и символ поиска и определяет суммарное число вхождений символа в текст.
//#include <iostream>
//#include <string>
//using namespace std;
//
//int main()
//{
//    setlocale(LC_ALL, "ru");
//    string stroka;
//    int counter = 0;
//    char bukva;
//    cout << "Введите текст: ";
//    getline(cin, stroka);
//    cout << "Введите букву, которую хотите узнать в тексте: ";
//    cin >> bukva;
//
//    for (unsigned int i = 0; i < stroka.length(); i++)
//        if (stroka[i] == bukva)
//            counter++;
//    cout << "В тексте " << counter << " <" << bukva << "> " << endl;
//    return 0;
//}
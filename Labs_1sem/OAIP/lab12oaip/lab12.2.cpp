//Задание 15.2

#include <iostream>
#include <ctime>

int main()
{
	setlocale(LC_CTYPE, "Rus");
	using namespace std;
	const int siz = 10;
	int F[siz] = { 1, -2, -3, 6, -7, 5, 4, 7,-5, -6 };
    int D[siz], rmn = 0, rmx = 20;
    int maxf = *F;
    bool W = 0;

    srand((unsigned)time(NULL));

    cout << "Массив F: ";
    for (int i = 0; i < siz; ++i) 
    {
        cout << *(F + i) << " ";
        *(D + i) = (int)(((double)rand() / (double)RAND_MAX) * (rmx - rmn) + rmn);

        if (*(F + i) > maxf ) 
        {
            maxf = *(F + i);
        }
    }
    cout << "\n\nМаксимальный элемент массива F: " << maxf << endl;
    cout << "\nМассив D: ";
    for (int i = 0; i < siz; ++i)
    {
        cout << *(D + i) << " ";
        if (*(D + i) == maxf)
        {
            W = 1;
        }
    }
    if (W == 1)
    {
        cout << "\n\nНаибольший элемент массива F, содержится в массиве D\n";
    }
    else
    {
        cout << "\n\nНаибольший элемент массива F, не содержится в массиве D\n";
    }
}
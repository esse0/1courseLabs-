#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    setlocale(0, "rus");

    vector <int> v{ 1,2,3,4,5,6,7,8,9,10 };

    int target1 = 3;
    int num_items1 = count(v.begin(), v.end(), target1);

    cout << "Число: " << target1 << " количество - " << num_items1 << endl;

    int num_items3 = count_if(v.begin(), v.end(), [target1](int i) {return i % target1 == 0; });
    cout << "Количество элементов, кратных " << target1 << ": " << num_items3 << endl;

    cout << "Лямбда, захват переменных" << endl;

    for (auto i : v) [i]() {if (i % 3 == 0) cout << i << " "; }();
    cout << endl;

    cout << "Лямбда с параметрами" << endl;

    for (auto i : v) [](auto i) {if (i % 3 == 0) cout << i << " "; }(i);
    cout << endl;

    cout << "Лямбда без параметров" << endl;

    for (auto i : v) [i] {if (i % 3 == 0) cout << i << " "; }();
    cout << endl;

    int number = -10;

    auto isdigit = [](int num) { return num > 0; };

    if (isdigit(number)) cout << "\nЧисло положительное";
    else cout << "Число отрицательное";
}

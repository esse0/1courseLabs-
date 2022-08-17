// Var 2.1 Скопировать в файл FILE2 только те строки из FILE1,
//которые начинаются с буквы «А». Подсчитать количество слов в FILE2.

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    setlocale(0, "Rus");

    ifstream f1("FILE1.txt");
    ofstream f2("FILE2.txt");

    if (!f1.is_open())
    {
        cout << "Error";
        exit(1);
    }

    char c[100]; int num = 0;

    cout << "Слова в первом файле:";

    while (!f1.eof())
    {
        f1.getline(c, 100);

        cout<< " " << c << " ";

        if (c[0] == 'A') {
            num += 1;
            f2 << c << endl;
        }
    }
    cout << "\nКоличество слов начнавшихся на А: " << num << endl;
    f1.close();
    f2.close();

    return 0;
}
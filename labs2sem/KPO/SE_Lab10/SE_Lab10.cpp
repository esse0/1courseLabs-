
#include "Varparm.h"

using namespace std;
using namespace Varparm;

int main()
{
    setlocale(0, "rus");

    int res1 = ivarparm(-1, 1, 2, 3, 4);
    int res2 = svaparm(4, 1, 10, 5, 15);
    double res3 = fvarparm(1.5, 2.3, 3.6, 4.9, FLT_MAX);
    double res4 = dvarparm(1.002, 1.003, 1.004, DBL_MAX);

    cout << "\nРезультат 1: " << res1 << endl << "Результат 2: " << res2 << endl << "Результат 3: " << res3 << endl << "Результат 4: " << res4 << endl;
}
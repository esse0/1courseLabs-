//страна: название, площадь, население, валюта

#include <iostream>

using namespace std;

typedef unsigned char day;
typedef unsigned char month;
typedef unsigned short year;

struct Date {

    day dd;
    month mm;
    year yyyy;

    bool operator== (Date other) {
        return this->dd == other.dd && this->mm == other.mm && this->yyyy == other.yyyy;
    }

    bool operator< (Date other) {
        if (this->yyyy < other.yyyy) return true;
        if (this->mm < other.mm && this->yyyy == other.yyyy) return true;
        if (this->dd < other.dd && this->mm == other.mm && this->yyyy == other.yyyy) return true;
        return false;
    }

    bool operator> (Date other) {
        if (this->yyyy > other.yyyy) return true;
        if (this->mm > other.mm && this->yyyy == other.yyyy) return true;
        if (this->dd > other.dd && this->mm == other.mm && this->yyyy == other.yyyy) return true;
        return false;
    }
};

typedef char name;
typedef int square;
typedef int population;
typedef char currency;

struct Country{

    name Name[20];
    square Square;
    population Population;
    currency Currency[4];

    bool operator== (Country other) {
        return this->Square == other.Square;
    }

    bool operator> (Country other) {
        return this->Square > other.Square;
    }

    bool operator< (Country other) {
        return this->Square < other.Square;
    }

};

int main()
{
    setlocale(LC_ALL, "rus");

    Date date1 = { 7,1,1980};
    Date date2 = { 7,2,1993 };
    Date date3 = { 7,1,1980 };

    if (date1 < date2) cout << "Истина\n";
    else cout << "Ложь\n";

    if (date1 > date2) cout << "Истина\n";
    else cout << "Ложь\n";

    if (date1 == date2) cout << "Истина\n";
    else cout << "Ложь\n";

    if (date1 == date3) cout << "Истина\n";
    else cout << "Ложь\n";

    Country country1 = { "Беларусь",207600,9399000,"BYN"};
    Country country2 = { "Россия",17100000,144100000,"RUB"};
    Country country3 = { "Польша",312679,37950000,"PLN"};

    if (country1 < country2) cout << "Площадь страны " << country2.Name << " больше" << " чем страны " << country1.Name << endl;
    else cout << "Площадь страны " << country1.Name << " больше" << " чем страны " << country2.Name << endl;

    if (country1 == country2) cout << "Площади стран " << country1.Name << " и " << country2.Name << " равны\n";

    if (country1 > country3) cout << "Площадь страны " << country1.Name << " больше" << " чем страны " << country3.Name << endl;
    else cout << "Площадь страны " << country3.Name << " больше" << " чем страны " << country1.Name << endl;

}

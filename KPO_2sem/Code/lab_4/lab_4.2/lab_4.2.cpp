#include <iostream>
#include <atlstr.h>
using namespace std;

typedef unsigned int houres;
typedef unsigned int minutes;
typedef unsigned int seconds;

struct TIME
{
    houres hr;
    minutes mn;
    seconds sc;
    TIME operator+(const TIME& other) const {
        return { hr + other.hr ,mn + other.mn,sc + other.sc };
    }
    TIME operator-(const TIME& other) const {
        return { hr - other.hr ,mn - other.mn,sc - other.sc };
    }
    bool operator>(const TIME& other) const {
        return  hr > other.hr ,mn || other.mn,sc || other.sc ;
    }
    bool operator<(const TIME& other) const {
        return  hr || other.hr , mn || other.mn,sc || other.sc ;
    }
 
};

int _tmain(int argc, _TCHAR* argv[])
{
    setlocale(LC_ALL, "rus");

    TIME T1 = { 10,20,40 };
    TIME T2 = { 16,32,49};
    TIME sum = T1 + T2;
    TIME Minus = T1 - T2;
    cout << sum.hr << endl;
    cout << Minus.hr << endl;;
    std::cout << (T1 < T2 ? "ИСТИНА" : "ЛОЖЬ") << std::endl;
    std::cout << (T1 > T2 ? "ИСТИНА" : "ЛОЖЬ") << std::endl;
}

#include <stdlib.h>
#include <iostream>
using namespace std;

void Quiz1()
{
    int f1;
    int f2;
    int f3;

    cout << "Please, enter three temperatures in Fahrenheit, separated by spaces:\n";
    cin >> f1 >> f2 >> f3;

    int c1 = (5 * (f1 - 32)) / 9;
    int c2 = (5 * (f2 - 32)) / 9;
    int c3 = (5 * (f3 - 32)) / 9;

    cout << c1 << " " << c2 << " " << c3 << "\n";
}



void Quiz1_Doubles()
{
    double f1;
    double f2;
    double f3;

    cout << "Please, enter three temperatures in Fahrenheit, separated by spaces:\n";
    cin >> f1 >> f2 >> f3;

    double c1 = (5 * (f1 - 32)) / 9;
    double c2 = (5 * (f2 - 32)) / 9;
    double c3 = (5 * (f3 - 32)) / 9;

    cout << c1 << " " << c2 << " " << c3 << "\n";
}


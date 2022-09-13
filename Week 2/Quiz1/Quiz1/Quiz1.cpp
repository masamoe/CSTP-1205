// Quiz1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    int f1;
    int f2;
    int f3;

    std::cout << "Please, enter three temperatures in Fahrenheit, separated by spaces:\n";
    std::cin >> f1 >> f2 >> f3;

    int c1 = (5 * (f1 - 32)) / 9;
    int c2 = (5 * (f2 - 32)) / 9;
    int c3 = (5 * (f3 - 32)) / 9;

    std::cout << c1 << " " << c2 << " " << c3 << "\n";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

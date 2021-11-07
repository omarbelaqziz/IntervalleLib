// userIntervalle.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Tableau.h"
#include "TableauBorne.h"
using namespace std;
using namespace Tab;
int main()
{
    Tableau T(2);
    T[0] = 11;
    T[1] = 12;
    Tableau T2 = T;
    Tableau T3(T);
    T3 = T2;
    cout << T3[1] << endl;
    TableauBorne TB(2, 0, 4);
    TB(0, 0.3);
    TB(1, 3.5);
    cout << TB[0] << endl;
    cout << TB[1] << endl;


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

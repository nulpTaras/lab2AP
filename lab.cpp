// Lab_02.cpp
// < Нерідний, Тарас >
// Лабораторна робота № 2.1
// Лінійні програми.
// Варіант 0.1
#include <iostream>

using namespace std;
int main()
{
    double x; // вхідний параметр
    double z1; // результат обчислення 1-го виразу
    double z2; // результат обчислення 2-го виразу
    cout << "x = "; cin >> x;
    z1 = ( sin(2*x) + sin(5*x) - sin(3*x) )  /  ( cos(x) + 1 - (2 * ( sin(2*x) * sin(2*x) )) );
    z2 = 2 * sin(x);
    cout << endl;
    cout << "z1 = " << z1 << endl;
    cout << "z2 = " << z2 << endl;
    cin.get();

    cout << "Change 1,2" << endl;

    // change1main
    cout << "\n\nchange1main" << endl;

    return 0;
}

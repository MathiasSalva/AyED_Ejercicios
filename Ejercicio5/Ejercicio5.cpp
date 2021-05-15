// Ejercicio5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    int x, y;

    cout << "Ingrese dos enteros distintos: " << endl;

    cin >> x >> y;

    if (x > y) 
    {
        cout << "El mayor es " << x << endl;
    }
    else
    {
        cout << "El mayor es " << y << endl;
    }
    



    return 0;
}
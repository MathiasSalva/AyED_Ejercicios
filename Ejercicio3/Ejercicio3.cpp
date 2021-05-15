// Ejercicio3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    int fecha, yyyy, mm, dd;

    cout << "Ingrese fecha en formato AAAAMMDD: " << endl;

    cin>>fecha;

    yyyy = fecha / 10000;
    mm =  (fecha / 100) - (yyyy * 100);
    dd = fecha - ((fecha / 100) * 100);

    cout << "Año: " << yyyy << endl;
    cout << "Mes: " << mm << endl;
    cout << "Dia: " << dd << endl;

    return 0;
}


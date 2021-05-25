#include <iostream>

using namespace std;
int main() {
    // Dados un mes y el año correspondiente informar cuantos días tiene el mes.

    //if (year is not divisible by 4) then (it is a common year)
    //else if (year is not divisible by 100) then (it is a leap year)
    //else if (year is not divisible by 400) then (it is a common year)
    //else (it is a leap year)
    int mm, yyyy, feb;
    cout << "Ingrese año"<< endl;
    cin >> yyyy;
    cout << "Ingrese mes" << endl;
    cin >> mm;

    // definir si es año bisiesto para saber si febrero tiene 28 o 29 días
    if (yyyy % 4 != 0)
    {
        feb = 28;
    }

    else if (yyyy % 100 != 0)
    {
        feb = 29;
    }
    else if (yyyy % 400)
    {
        feb = 28;
    }
    else
    {
        feb = 29;
    }


    // grupo

    if ( mm == 4 || mm == 6 || mm == 9 || mm == 11)

    {
        cout << "El mes tiene 30 días" << endl;
    }
    else if (mm == 2)
    {
        cout << "el mes tiene " << feb << " dias" << endl;
    }
    else
    {
        cout << "El mes tiene 31 días" << endl;
    }

    return 0;
}

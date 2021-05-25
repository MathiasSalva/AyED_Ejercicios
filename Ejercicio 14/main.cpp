#include <iostream>
using namespace std;

int main() {
    int n, avg = 0, mayores = 0, suma_neg = 0;
    for (int i = 0; i < 5; i++)
    {
        cout << "Ingrese numero entero"<< endl;
        cin >> n;
        if (n > 100)
        {
            avg += n;
            mayores += 1;
        }
        else if (n < -10)
        {
            suma_neg += n;
        }
    }
    if (mayores != 0)
        avg /= mayores;
    else
        avg = 0;
    cout << "Promedio de los mayores a 100: " << avg << endl;
    cout << "Suma de los menores a -10: " << suma_neg << endl;

}

#include <iostream>

using namespace std;

int main() {
    //Dado un triángulo representado por sus lados L1, L2, L3, determinar e imprimir
    //una leyenda según sea: equilátero, isósceles o escálenos.
    int L1, L2, L3;

    cin >> L1 >> L2 >> L3;

    if (L1 == L2 && L2 == L3)
    {
        cout << "Equilatero" << endl;
    }

    else if (L1 == L2 || L2 == L3 || L3 == L1)
    {
        cout << "Isosceles" << endl;
    }

    else
    {
        cout << "Escalenos" << endl;
    }

    return 0;
}

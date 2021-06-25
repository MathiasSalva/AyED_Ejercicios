#include <iostream>

using namespace std;

int main() {

    //Dadas dos fechas informar cual es la más reciente. Determine cuales serían los
    //datos de entrada y las leyendas a informar de acuerdo al proceso solicitado
    int yyyy, yyyy2, mm, mm2, dd, dd2, fecha1, fecha2;

    cin >> yyyy >> mm >> dd;
    cin >> yyyy2 >> mm2 >> dd2;

    fecha1 = yyyy * 10000 + mm * 100 + dd;
    fecha2 = yyyy2 * 10000 + mm2 * 100 + dd2;

    if (fecha1 > fecha2)
    {
        cout << "Fecha 1 es la más cercana" << endl;
    }
    else
    {
        cout << "Fecha 2 es la más cercana" << endl;
    }

    return 0;
}

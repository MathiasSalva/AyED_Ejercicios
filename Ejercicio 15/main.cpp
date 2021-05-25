#include <iostream>
#include <stdio.h>

using namespace std;
int main() {
    int tipo, contador_clausura = 0;
    float multa, l=0, m=0, g=0;
    char motivo[255], gravedad;

    for (int inf = 1; inf <= 4; inf++)
    {
        cout << "Ingrese datos de la infraccion #" << inf << endl;
        cout << "Tipo de multa" << endl;
        cin >> tipo;
        cout << "Motivo" << endl;
        fflush(stdin);
        fgets(motivo,255,stdin);
        cout << "Valor de la multa" << endl;
        cin >> multa;
        cout << "Tipo de gravedad" << endl;
        cin >> gravedad;

        switch (gravedad) {
            case 'L':
                l += multa;
                break;
            case 'M':
                m += multa;
                break;
            case 'G':
                g += multa;
                if (tipo == 3 || tipo == 4)
                    contador_clausura += 1;
                break;
            default:
                cout << "Tipo de gravedad invalido en infraccion #" << inf << endl;
                break;
        }
    }

    cout << "Total de multas infraccion L: " << l << endl;
    cout << "Total de multas M: " << m << endl;
    cout << "Total de multas G: " << g << endl;
    if (contador_clausura > 3)
        cout << "CLAUSURAR FABRICA" << endl;


    return 0;
}

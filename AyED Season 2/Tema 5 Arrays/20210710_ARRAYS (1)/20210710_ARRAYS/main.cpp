#include <iostream>
#define TAM 10
using namespace std;

int main()
{
    //const int x = 15;
    int presiones[TAM], valorbuscado;
    int cont;
    for (int i=0; i<TAM; i++)
    {
        cout << "Ingrese el valor " << i+1 << ": ";
        cin >> presiones[i];
    }

    cout << "Ingrese un valor de presión arterial sistólica a buscar:" << endl;
    cin >> valorbuscado;
    while (valorbuscado!=-1)
    {
        cont = 0;
        //Ejecutamos una búsqueda secuencial
        for (int i= 0; i<TAM; i++)
        {
            if(presiones[i] == valorbuscado)
                cont++;
        }
        cout << "El valor " << valorbuscado << " se presentó " << cont << " veces" << endl;
        cout << "Ingrese un valor de presión arterial sistólica a buscar:" << endl;
        cin >> valorbuscado;
    }

    /*
    for (int i=0; i<10; i++)
        cout << "presiones[" << i << "]= " << presiones[i] << endl;
        */
    return 0;
}

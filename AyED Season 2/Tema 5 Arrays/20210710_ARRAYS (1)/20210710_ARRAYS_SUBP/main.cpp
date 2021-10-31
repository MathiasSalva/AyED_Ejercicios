#include <iostream>
#define TAM 3

using namespace std;

void leerValores(int vec[], int tam)
{
    for (int i=0; i < tam; i++)
    {
        cout << "Ingrese el valor " << i+1 << ": ";
        cin >> vec[i];
    }
    return;
}

void mostrarVector(int vec[], int tam)
{
    for (int i=0; i<tam; i++)
        cout << "vec[" << i << "]= " << vec[i] << endl;
    return;
}

int contarValorBuscado(int vec[], int tam, int valorbuscado)
{
    int cont = 0;
    for (int i= 0; i < tam; i++)
    {
        if(vec[i] == valorbuscado)
            cont++;
    }
    return cont;
}

int main()
{
    /*const int TAMA = 3;
    TAMA =10;*/
    int presiones[TAM], valorbuscado;
    cout << presiones << endl;
    leerValores(presiones, TAM);
    do
    {
        cout << "Ingrese un valor de presión arterial sistólica a buscar:" << endl;
        cin >> valorbuscado;
        //Ejecutamos una búsqueda secuencial
        if (valorbuscado != -1)
            cout << "El valor " << valorbuscado << " se presentó " << contarValorBuscado(presiones, TAM, valorbuscado) << " veces" << endl;
    } while (valorbuscado!=-1);
    //mostrarVector(presiones,TAM);
    return 0;
}

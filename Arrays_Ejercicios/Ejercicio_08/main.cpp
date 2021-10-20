#include <iostream>
#include <ctime>
#include <cstdlib>
#include "conio.h"
#define m 6
#define n 5

using namespace std;

void cargarTabla(int tabla[][n]){
    srand(time(0));
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            tabla[i][j] = rand() % 100;
        }
    }

}

void tabtovec(int t[][n], int v[]){
    int k = 0;
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            v[k] = t[i][j];
            k++;
        }
    }
}

void mostrarVec(int v[], int tam){
    for (int i = 0; i < tam; i++){
        cout << "v[" << i << "] = " << v[i] << endl;
    }
}

void bubbleSort(int v[], int tam){
    int aux;
    for (int i = 0; i < tam - 1; i++){
        for (int j = 0; j < tam - 1 - i; j++){
            if (v[j+1] < v[j]){
                aux = v[j];
                v[j] = v[j+1];
                v[j+1] = aux;
            }
        }
    }
    return;
}


void mostrar_tabla(int const t[][n])
{
    for (int i=0; i< m; i++)
    {
        for (int j=0; j < n; j++)
        {
            cout << t[i][j] << "\t\t";
        }
        cout << endl << endl;
    }
    cout << "Fin de la tabla, presione una tecla para finalizar." << endl;
    getch();
    return;
}


int main() {

    int tabla[m][n];
    int vec[m * n];

    cargarTabla(tabla);
    tabtovec(tabla, vec);
    bubbleSort(vec, m*n);
    mostrarVec(vec, m*n);
    mostrar_tabla(tabla);


    return 0;
}

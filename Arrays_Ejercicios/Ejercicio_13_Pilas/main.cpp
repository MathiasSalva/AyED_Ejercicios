#include <iostream>
#define VACIO -999999
#define TAM 20
using namespace std;

void inicializarVacio(int vec[], int tam){
    for (int i = 0; i < tam; i++){
        vec[i] = VACIO;
    }
}

bool queue(int vec[], int tam, int el){
    int i = 0;
    while (i < tam && vec[i] != VACIO)
        i++;
    if (i >= tam){
        cout << "Vector lleno" << endl;
        return false;
    }
    else{
        vec[i] = el;
        return true;
    }
}

bool unqueue(int vec[], int tam){
    //TODO Funcion para sacar primer elemento de la fila y mover el resto una posicion menos
    if (vec[0] == VACIO)
        return false;
    else{
        for (int i = 0; i < tam && vec[i] != VACIO; i++){
            if (i == tam - 1){
                vec[i] = VACIO;
            }
            else
                vec[i] = vec[i+1];
        }
        return true;
    }
}

void mostrarVector(int vec[], int tam){
    for (int i = 0; i < tam && vec[i] != VACIO; i++)
        cout << vec[i] << " ";
}

int main() {

    int vec[TAM], numero_allenar = 0;
    bool vacio = true, lleno = true;
    inicializarVacio(vec, TAM);

    while (lleno){
        numero_allenar++;
        mostrarVector(vec, TAM);
        cout << endl;
        lleno = queue(vec, TAM, numero_allenar);

    }

    cout << endl;
    cout << "*************************" << endl;
    while(vacio){
        mostrarVector(vec, TAM);
        vacio = unqueue(vec, TAM);
        cout << endl;
    }
    cout << "El vector esta vacio" << endl;



    return 0;
}

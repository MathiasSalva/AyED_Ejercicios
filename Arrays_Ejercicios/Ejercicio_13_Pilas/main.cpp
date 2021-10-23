#include <iostream>
#define VACIO -999999
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
}

void mostrarVector(int vec[], int tam){
    for (int i = 0; i < tam && vec[i] != VACIO; i++)
        cout << vec[i] << " ";
}

int main() {

    int vec[20];
    inicializarVacio(vec, 20);

    queue(vec, 20, 1);
    queue(vec, 20, 2);
    queue(vec, 20, 3);
    queue(vec, 20, 4);
    queue(vec, 20, 5);

    mostrarVector(vec, 20);


    return 0;
}

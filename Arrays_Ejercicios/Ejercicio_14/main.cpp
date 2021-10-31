#include <iostream>
#define VACIO -99999
#define TAM 20
using namespace std;

void initVec(int vec[], int tam){
    for (int i = 0; i < tam; i++){
        vec[i] = VACIO;
    }
}

void mostrarVec(int vec[], int tam){
    for (int i = 0; i < tam && vec[i] != VACIO; i++){
        cout << vec[i] << endl;
    }
}

bool push(int vec[], int tam, int el){
    int i = 0;
    while (i < tam && vec[i] != VACIO){
        i++;
    }
    if (i >= tam)
        return true;
    else {
        vec[i] = el;
        return false;
    }
}

bool pop(){
    // TODO Crear funcion para mostrar el ultimo dato de la pila.
    return true;
}

int main() {
    int vector[TAM], el;
    bool vector_lleno = false, vector_vacio = false, salir = false;
    initVec(vector, TAM);
    mostrarVec(vector, TAM);

    while (!vector_lleno && !salir){
        cout << "Ingrese un numero o apriete ESC para salir" << endl;
        fflush(stdin);
        el = getc(stdin);
        if (el = )
        cin >> el;
        vector_lleno = push(vector, TAM, el);
    }
    mostrarVec(vector, TAM);

    return 0;
}

#include <iostream>
#define TAM 10

using namespace std;

void leerValores(int v[], int tam){
    for (int i = 0; i < tam; i++){
        cout << "Ingrese valor" << endl;
        cin >> v[i];
    }
}

void mostrarValoresInverso(int v[], int tam){
    for (int i = tam - 1; i > -1; i--){
        cout << "v[" << i << "] = " << v[i] << endl;
    }
}

int main() {
    int vec[TAM];

    leerValores(vec, TAM);

    mostrarValoresInverso(vec, TAM);

    return 0;
}

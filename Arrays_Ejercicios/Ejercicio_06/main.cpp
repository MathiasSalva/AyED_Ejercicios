#include <iostream>

using namespace std;

void BurbujeoMejorado(int v[], int tam){

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

void mostrarDesc(int v[], int tam){
    BurbujeoMejorado(v, tam);
    int i = tam-1;
    while (i >= 0){
        cout << "v[" << i << "] = " << v[i] << endl;
        i--;
    }

}

int main() {
    int vec[10] = {3, 9, 8, 1, 5, 4, 2, 6};
    int tam;
    cout << "Ingrese size del array" << endl;
    cin >> tam;
    mostrarDesc(vec, tam);

    return 0;
}

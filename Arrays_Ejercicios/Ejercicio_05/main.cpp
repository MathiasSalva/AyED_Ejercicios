#include <iostream>
using namespace std;

void suma(int v[], int v2[], int vres[], int tam){

    for (int i = 0; i < tam; i++){
        vres[i] = v[i] + v2[i];
    }
    return;
}

int mul(int v[], int v2[], int tam){
    int sum = 0;
    for (int i= 0; i < tam; i++){
        sum += v[i] * v2[i];
    }
    return sum;
}

int main() {
    int vec1[10] = {2, 2, 3, 2, 1, 0, 1, 1, 9, 8};
    int vec2[10] = {3, 3, 2, 3, 4, 5, 6, 7, 9, 92};
    int vecres[10], tam;
    cout << "Ingresar size" << endl;
    do {
        cin >> tam;
        if (!(tam >= 2 && tam <= 10)) {
            cout << "Ingresar valor entre 2 y 10" << endl;
        }
    }
    while (!(tam >= 2 && tam <= 10));
    cout << endl;

    suma(vec1, vec2, vecres, tam);

    for (int i = 0; i < tam; i++){
        cout << "vres[" << i << "] = " << vecres[i] << endl;
    }

    cout << "El producto de los vectores es " << mul(vec1, vec2, tam) << endl;

    return 0;
}

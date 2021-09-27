#include <iostream>
#include <ctime>
#include <cmath>
#define TAM 15

using namespace std;

void incializar(int v[], int tam){
    srand(time(NULL));
    for (int i = 0; i < tam; i ++){
        v[i] = rand() % 100;
    }

}

void mostrar(int v[], int tam)
{
    for (int i = 0; i < tam; i++)
    {
        cout << "v[" << i << "] = " << v[i] << endl;
    }
}

int buscarMayor(int v[], int tam){
    int mayor;
    for (int i = 0; i < tam; i++){
        if (i == 0)
            mayor = v[i];
        else if (mayor < v[i])
            mayor = v[i];
    }

    return mayor;
}

int buscarMenor(int v[], int tam){
    int menor;
    for (int i = 0; i < tam; i++){
        if (i == 0)
            menor = v[i];
        else if (menor > v[i])
            menor = v[i];
    }
    return menor;
}

float promedio(int v[], int tam){
    float avg;
    float total = 0;

    for (int i = 0; i < tam; i++){
        total += v[i];
    }

    if (total != 0){
        avg = total / tam;
    }
    else
        avg = 0;
    return avg;

}

int cercanoPromedio(int v[], int tam, float promedio){
    int i = 0,
        mas_cercano = v[0];
    int delta = abs(v[0] - promedio);
    for (i = 0; i < tam; i++){
        if (abs(v[i] - promedio) < delta){
            delta = abs(v[i] - promedio);
            mas_cercano = v[i];
        }
    }

    return mas_cercano;

}

int main() {

    int vec[TAM], mayor, menor, mas_cercano;
    float avg;
    incializar(vec, TAM);
    mayor = buscarMayor(vec, TAM);
    menor = buscarMenor(vec, TAM);
    avg = promedio(vec, TAM);
    mas_cercano = cercanoPromedio(vec, TAM, avg);
    mostrar(vec, TAM);
    cout << endl << "El numero mas grande es: " << mayor << endl;
    cout << endl << "El numero mas chico es: " << menor << endl;
    cout << endl << "El promedio es: " << avg << endl;
    cout << endl << "El mas cercano al promedio es: " << mas_cercano << endl;
    return 0;
}

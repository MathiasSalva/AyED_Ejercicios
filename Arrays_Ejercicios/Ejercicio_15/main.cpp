#include <iostream>

using namespace std;

void bubblesort(int vec[], int tam){
    int aux;
    for (int i = 0; i < tam - 1; i++)
        for (int j = 0; j < tam - 1 - i; j++){
            if (vec[j+1] < vec[j]){
                aux = vec[j+1];
                vec[j+1] = vec[j];
                vec[j] = aux;
            }
        }
}

bool ingresarOrdenado(int vec[], int tam){

}

int main() {

    return 0;
}

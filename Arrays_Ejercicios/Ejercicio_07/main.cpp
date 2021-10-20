#include <iostream>

// Confeccionar un subprograma que, dados dos vectores de números
//enteros liste el contenido de ambos pero en forma ordenada. Utilice el
//algoritmo de apareo

void apareo(int v1[], int v2[], int vres[], int tam1, int tam2){

    int i = 0, j = 0, k = 0;

    while (i < tam1 && j < tam2){
        if (v1[i] < v2[j]){
            vres[k] = v1[j];
            i++;
        }
        else {
            vres[k] = v2[j];
            j++;
        }
        k++;
    }
    for (int cont = i; cont < tam1; cont++){
        vres[k] = v1[cont];
        k++;
    }
    for (int cont = j; cont < tam2; cont++){
        vres[k] = v2[cont];
        k++;
    }
}

int main() {
    int vec1[6] = {1, 3, 5, 7, 9, 11};
    int vec2[6] = {2, 4, 6, 8, 10, 12};
    int vres[12];

    apareo(vec1, vec2, vres, 6, 6);

    for (int i = 0; i < 12; i++){
        std::cout << "vres[" << i << "] = " << vres[i] << std::endl;
    }

    return 0;
}

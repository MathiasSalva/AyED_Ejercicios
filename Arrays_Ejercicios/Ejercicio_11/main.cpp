#include <iostream>
#include <time.h>
#define M 5
#define N 5
#define P 5

using namespace std;

void initMat(int mat[][M][P]){
    srand(time(0));
    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
            for (int k = 0; k < P; k++)
                mat[i][j][k] = rand() % 100;

}

void mostrarMat(int mat[][M][P]){
    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
            for (int k = 0; k < P; k++)
                cout << "mat[" << i <<"]["<<j<<"]["<<k<<"] = "<< mat[i][j][k] << endl;
}

void burbujeo(int mat[][M][P]){
    int aux;
    int tam = M*N*P;
    for (int i = 0; i < tam; i++ )
        for (int j = 0; j < tam - 1 - i; j++){

        }

}
int main() {

    int mat[N][M][P];
    initMat(mat);
    mostrarMat(mat);


    return 0;
}

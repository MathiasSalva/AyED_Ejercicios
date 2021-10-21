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

void mostrarMat(int mat[N][M][P]){
    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
            for (int k = 0; k < P; k++)
                cout << "mat[" << i <<"]["<<j<<"]["<<k<<"] = "<< mat[i][j][k] << endl;
}
// Burbujeo 3D
void burbuja(int mat[][M][P], int filas){
    int aux;
    for (int i = 0; i < filas; i++)
        for (int j = 0; j < M; j++)
            for(int k = 0; k < P; k++)
                for (int a = 0 ; a < filas; a++)
                    for (int b = 0; b < M; b++)
                        for (int c = 0 ; c < P ; c++)
                            if (mat[i][j][k] < mat[a][b][c]){
                                aux = mat[i][j][k];
                                mat[i][j][k] = mat[a][b][c];
                                mat[a][b][c] = aux;
                            }

    }


int main() {

    int mat[N][M][P];
    initMat(mat);
    burbuja(mat, N);
    mostrarMat(mat);


    return 0;
}

#include <iostream>
#include <string.h>
#include <cstdio> //fflush
#include <cstdlib>
#include <cstring>
#include <conio.h> //getch
#include <stdlib.h> //atoi


using namespace std;

void initTable(char t[][4][50], int filas){
    for (int i = 0; i < filas; i++){
        for (int j = 0; j < 4; j++){

            strcpy(t[i][j], "");

        }
    }
    return;
}

void ingresarDatos(char t[][4][50], int fila){
    cout << "Ingresar apellido y nombre" << endl;
    fflush(stdin);
    gets(t[fila][0]);
    cout << "Ingrese direccion" << endl;
    fflush(stdin);
    gets(t[fila][1]);
    cout << "Ingrese edad" << endl;
    cin >> t[fila][2];
    cout << "Ingrese saldos" << endl;
    cin >> t[fila][3];

    return;

}

void mostrarDatos(char t[][4][50], int filas){
    cout << "| Apellido y Nombre | Direccion | Edad | Salario |" <<endl;
    for (int i = 0; i < filas; i++){
        cout << "| " << t[i][0] << " | " << t[i][1] << " | " << t[i][2] << " | " << t[i][3] << " |" << endl;
        }
    }
void burbuja(char t[][4][50], int filas){
    char aux[50];
    for (int i = 0; i < filas - 1; i++){
        for (int j = 0; j < filas - 1 - i; j++){
            if (atoi(t[j+1][3]) < atoi(t[j][3])){

                for (int col = 0; col < 4; col++){
                    strcpy(aux, t[j][col]);
                    strcpy(t[j][col], t[i+1][col]);
                    strcpy(t[j+1][col],aux);
                }

            }

        }
    }
}


int main(){
    char lista[4][4][50];
    initTable(lista, 4);
    ingresarDatos(lista, 0);
    ingresarDatos(lista, 1);
    mostrarDatos(lista, 2);
    burbuja(lista, 4);
    mostrarDatos(lista, 2);
    return 0;
}
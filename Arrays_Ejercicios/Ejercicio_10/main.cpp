#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <conio.h>


using namespace std;

void initTab(char t[][5][50]){
    for (int i = 0; i < 50; i++){
        for (int j = 0; j < 5; j++){
            strcpy(t[3][50], "");
        }
    }
}

void ingresarDatos(char t[][5][50], int fila){
    cout << "Ingrese apellido y nombre" << endl;
    fflush(stdin);
    gets(t[fila][0]);
    cout << "Ingrese Direccion" << endl;
    fflush(stdin);
    gets(t[fila][1]);
    cout << "Ingrese Edad" << endl;
    cin >> t[fila][2];
    cout << "Ingrese Saldos" << endl;
    cin >> t[fila][3];

}

void burbujeo(){



}

void mostrarTabla(char t[][5][50], int filas){
    for (int i = 0; i < filas; i++){
        cout << "| " << t[i][0] << " | " << t[i][1] << " |";
        cout << "| " << t[i][2] << " | " << t[i][3] << " |" << endl;
    }
    return;
}

int main() {
    char tabla[10][5][50];
    ingresarDatos(tabla,0);
    ingresarDatos(tabla,1);
    ingresarDatos(tabla,2);
    ingresarDatos(tabla,3);

    mostrarTabla(tabla, 3);

    return 0;
}

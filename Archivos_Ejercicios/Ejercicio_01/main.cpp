#include <iostream>
#include <curses.h>
#include <bits/stdc++.h>

using namespace std;

int main() {

    float n;
    int cantidad;
    FILE *archivo_decimales;
    char ruta_del_archivo[1000] = "/home/matt/CLionProjects/RepoUTN/AyED_Ejercicios/Archivos_Ejercicios/carpetadearchivos/Ejercicio1.bin";
    archivo_decimales = fopen(ruta_del_archivo, "ab+");
    if (archivo_decimales == nullptr){
        cout << "Error al crear o abrir el archivo!" << endl;
        fclose(archivo_decimales);
        return 1;
    }
    else {
        cout << "Ingrese cantidad de numeros a leer " << endl;
        cin >> cantidad;
        if (cantidad){
            cout << "Ingrese numeros decimales:" << endl;
        }
        for (int i = 0; i < cantidad; i++){
            cin >> n;

            fwrite(&n, sizeof(n), 1, archivo_decimales);

            //cout << "Presione una tecla cualquiera para continuar..."<<endl;
            //getch();

        }
        fseek(archivo_decimales, 0, SEEK_SET);
        cout << "Lectura de numeros en el archivo: " << endl;
        while(fread(&n, sizeof(float), 1, archivo_decimales) == 1){
            cout << n << endl;
        }
        return 0;
    }

}

#include <iostream>
#include <curses.h>
#include <bits/stdc++.h>

using namespace std;

int main() {

    float n;
    bool salir = false;
    int cantidad, opcion, pos;
    int q_registros;
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

        cout << "Si desea modificar un numero presione 1" << endl;
        cin >> opcion;
        while (opcion == 1 && !salir){
            // Sacar el tamano del registro
            fseek(archivo_decimales, 0, SEEK_END);
            q_registros = ftell(archivo_decimales) / sizeof(float);

            cout << "Indique posicion del numero a modificar (entre 1 y "<< q_registros << " inclusive)" << endl;

            cin >> pos;


            if (pos > 0 && pos <= q_registros ){
                fseek(archivo_decimales, pos-1, SEEK_CUR);

                cout << "Indique nuevo valor: " << endl;
                cin >> n;
                fwrite(&n, sizeof(float), 1, archivo_decimales);
                salir = true;
            }

            else {
                cout << "Posicion fuera de rango!" << endl;
                cout << "Ingrese una posicion entre 1 y "<< q_registros <<" inclusive o "
                << q_registros + 1 << " para salir" << endl;
                cin >> pos;
                if (pos == q_registros + 1)
                    salir = true;
            }
            fseek(archivo_decimales, 0, SEEK_SET);
            cout << "Lectura de numeros en el archivo: " << endl;
            while(fread(&n, sizeof(float), 1, archivo_decimales) == 1){
                cout << n << endl;
            }
        }
        fclose(archivo_decimales);
        return 0;
    }

}

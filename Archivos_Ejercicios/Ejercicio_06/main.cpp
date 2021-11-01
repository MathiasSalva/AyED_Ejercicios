#include <iostream>
#include "ncurses.h"
using namespace std;

struct Alumno {
    char nombre[50];
    char apellido[50];
    char legajo[10];
    char dni[9];
    char fecha_de_nacimiento[15];
};

int main() {
    FILE *file_;
    Alumno al, al_archivo;
    char ruta[200] = "/home/matt/CLionProjects/RepoUTN/AyED_Ejercicios/"
                     "Archivos_Ejercicios/carpetadearchivos/Ejercicio_06.bin";
    file_ = fopen(ruta, "wb+");

    if (file_){
        for (int i = 0; i < 3; i++){
            cout << "Ingrese datos del alumno #" << i+1 << endl;
            cout << "Nombre: ";
            cin >> al.nombre;
            cout << endl << "Apellido: ";
            cin >> al.apellido;
            cout << endl << "Legajo: ";
            cin >> al.legajo;
            cout << endl << "DNI: ";
            cin >> al.dni;
            cout << endl << "Fecha de Nacimiento (DD/MM/YYYY): ";
            cin >> al.fecha_de_nacimiento;
            cout << endl;
            getch();

            fwrite(&al, sizeof(Alumno), 1, file_);
        }
        fclose(file_);
    }

    // Lectura
    file_ = fopen(ruta, "rb");
    if (file_){
        int i = 0;
        while (fread(&al, sizeof(Alumno), 1, file_) == 1){
            i++;
            cout << "************ Datos de alumno #" << i << " ************"<< endl;
            cout << "Nombre: " << al.nombre << endl;
            cout << "Apellido: " << al.apellido << endl;
            cout << "Legajo: " << al.legajo << endl;
            cout << "DNI: " << al.dni << endl;
            cout << "Fecha de nacimiento: " << al.fecha_de_nacimiento << endl;
        }
    }
    return 0;
}

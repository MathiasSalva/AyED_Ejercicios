#include <iostream>
#include <string.h>
#include <conio.h>

using namespace std;

struct Alumno{
    char nombre_y_apellido[50];
    char doc[50];
    char legajo[50];
    int nota;

};


int main() {
    int total_notas = 0;
    float promedio = 0;
    int peor_nota;
    char peor_alumno[50];
    Alumno al;
    int cantidad = 0;
    do {
        cout << "Ingresar nombre y apellido del alumno" << endl;
        fflush(stdin);
        gets(al.nombre_y_apellido);
        cout << "Ingresar tipo y numero de documento" << endl;
        fflush(stdin);
        gets(al.doc);
        cout << "Ingresar Legajo" << endl;
        fflush(stdin);
        gets(al.legajo);
        cout << "Ingresar Nota" << endl;
        cin >> al.nota;

        if (!cantidad){
            peor_nota = al.nota;
            strcpy(peor_alumno, al.nombre_y_apellido);
        } else if (al.nota < peor_nota){
            peor_nota = al.nota;
            strcpy(peor_alumno, al.nombre_y_apellido);
        }
        cout << "Alumno: " << al.nombre_y_apellido << endl;
        cout << "Documento: " << al.doc << endl;
        cout << "Legajo: " << al.legajo << endl;
        cout << "Nota: " << al.nota << endl;
        total_notas += al.nota;
        cantidad++;
        cout << "Presione una tecla para continuar..." << endl;
        getch();

    }
    while (strcmp(al.nombre_y_apellido, "Wolf Roberto"));

    if (cantidad){
        promedio = total_notas / cantidad;
    }

    cout << "Promedio General: " << promedio << endl;
    cout << "Alumno con peor nota: " << peor_alumno << endl;
    cout << "Peor nota: " << peor_nota << endl;


    return 0;
}

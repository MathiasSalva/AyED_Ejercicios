#include <iostream>
#include <string.h>

using namespace std;
// TODO Pasar la fecha y comparacion a AAAAMMDD porque esta hecho en edad no fecha de nacimiento
int main() {
    char nombre[70], nombre_mayor[70];
    int edad, edad_mayor = -1;

    cout << "Ingrese nombre" << endl;
    fflush (stdout);
    fflush(stdin);
    fgets(nombre, 100, stdin);

    if (strcmp(nombre, "FIN\n" ) != 0)
    {
        while ((strcmp(nombre, "FIN\n" ) != 0))
        {
            cout << "Ingrese edad" << endl;
            cin >> edad;

            if (edad > edad_mayor)
            {
                edad_mayor = edad;
                strcpy(nombre_mayor, nombre);
            }

            cout << "Ingrese nombre" << endl;
            fflush (stdout);
            fflush(stdin);
            fgets(nombre, 100, stdin);
        }
    }


    cout << "Nombre del mayor: " << nombre_mayor << endl;
    cout << "Edad del mayor: " << edad_mayor << endl;

    return 0;
}

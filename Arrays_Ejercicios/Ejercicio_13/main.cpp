#include <iostream>
#include <string.h>
#define VACIO -1

using namespace std;

struct Empleado{

    char nombre[70];
    int dni;
    char estado[20];
    char direccion[50];
    char telefono[20];
    char sexo;
    int edad;


};

void menu(){
    cout << "1. Mostrar empleados proximos a jubilarse" << endl;
    cout << "2. Obtener promedio de los empleados" << endl;
    cout << "3. Traer datos de empleado por DNI" << endl;
    cout << "4. Salir" << endl;

}

float sacarPromedio(Empleado e[], int tam){
    int edad_total = 0;
    int i;
    float promedio;
    for (i = 0; i < tam; i++){
        edad_total += e[i].edad;
    }
    if (i > 0){
        promedio = edad_total / i;
        return promedio;
    }
    else
        return 0;
}

int obtenerEmpleado(Empleado empleados[], int tam, int dni, Empleado &e){

    for (int i = 0; i < tam; i++){
        if (dni == empleados[i].dni){
            e = empleados[i];
            return 0;
        }
    }
    cout << "No existe empleado con ese DNI" << endl << endl;
    return -1;


}

void mostrarEmpleado(Empleado e){
    cout << "Nombre: " << e.nombre << endl;
    cout << "DNI: " << e.dni << endl;
    cout << "Sexo: " << e.sexo << endl;
    cout << "Edad: " << e.edad << endl;
    cout << "Estado: " << e.estado << endl;
    cout << "Direccion: " << e.direccion << endl;


}

void burbujeoAlfabetico(Empleado e[], int tam){
    Empleado aux;
    for (int i = 0; i < tam - 1 && e[i].dni != VACIO && e[i+1].dni != VACIO; i++){
        for (int j = 0; j < tam - 1 - i && e[j].dni != VACIO && e[j+1].dni != VACIO; j++){
            if (strcmp(e[j+1].nombre,e[j].nombre) < 0){
                aux = e[j+1];
                e[j+1] = e[j];
                e[j] = aux;
            }
        }
    }
}

void proximasJubilaciones(Empleado e[], int tam, Empleado jubilaciones[], int tam_jub){
    for (int i = 0; i < tam && i < tam_jub && e[i].dni != VACIO; i++){
        if ((e[i].edad >= 60 && e[i].sexo == 'H') || (e[i].edad >= 55 && e[i].sexo == 'M'))
            jubilaciones[i] = e[i];
    }
    burbujeoAlfabetico(jubilaciones, tam_jub);
    for (int j = 0; j < tam_jub && jubilaciones[j].dni != VACIO; j++){
        cout << endl << "************************" << endl;
        cout << "Nombre: " << jubilaciones[j].nombre << endl;
        cout << "DNI: "<< jubilaciones[j].dni << endl;
        cout << "Sexo: "<< jubilaciones[j].sexo << endl;
        cout << "Edad: "<< jubilaciones[j].edad << endl;
        cout << "Estado: "<< jubilaciones[j].estado << endl;
        cout << "Direccion: " << jubilaciones[j].direccion << endl;
    }
    cout << "************************" << endl;
}

void iniciarVacio(Empleado e[], int tam){
    for (int i = 0; i < tam; i++){
        e[i].dni = VACIO;
    }
}


int main() {
    unsigned short int opcion;
    Empleado empleados[2], empleadoEncontrado;
    Empleado proximosJubilacion[25];
    unsigned long int dni;
    iniciarVacio(empleados, 3);
    iniciarVacio(proximosJubilacion, 25);

    strcpy(empleados[0].nombre, "Juan Carlos");
    empleados[0].dni = 39803657;
    strcpy(empleados[0].estado, "Soltero");
    strcpy(empleados[0].direccion,"Antartida Argentina 4377");
    empleados[0].sexo = 'H';
    empleados[0].edad = 64;
    strcpy(empleados[0].telefono, "113132423");

    strcpy(empleados[1].nombre, "Abelardo Salva");
    empleados[1].dni = 124423;
    strcpy(empleados[1].estado, "Soltero");
    strcpy(empleados[1].direccion,"Belgrano 4377");
    empleados[1].sexo = 'H';
    empleados[1].edad = 71;
    strcpy(empleados[1].telefono, "1155243924");

//    strcpy(empleados[2].nombre, "Luis Pedro");
//    empleados[2].dni = 9122503;
//    strcpy(empleados[2].estado, "Soltero");
//    strcpy(empleados[2].direccion,"Munin 213");
//    empleados[2].sexo = 'M';
//    empleados[2].edad = 31;
//    strcpy(empleados[2].telefono, "159932215");

    menu();
    cin >> opcion;
    while (opcion != 4){
        switch (opcion) {

            case 1:
                //TODO Funcion para devolver lista de empleados próximos a jubilarse
                cout << "Lista de empleados proximos a jubilarse: " << endl;
                proximasJubilaciones(empleados, 2, proximosJubilacion, 25);

                break;
            case 2:
                cout << "El promedio es " << sacarPromedio(empleados, 3) << endl;
                break;
            case 3:
                cout << "Ingrese DNI del empleado a buscar" << endl;
                cin >> dni;
                // Traer datos de un empleado por DNI
                if (!(obtenerEmpleado(empleados, 2, dni, empleadoEncontrado)))
                    mostrarEmpleado(empleadoEncontrado);
                break;
            default:
                break;
        }


        menu();
        cin >> opcion;
    }

    return 0;
}

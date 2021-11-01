#include <iostream>
#include <cstring>

using namespace std;

struct Alumno {
    char nombre[50];
    char apellido[50];
    char legajo[10];
    char dni[9];
    char fecha_de_nacimiento[15];
};

void menu(){
    cout << "******Elija una de las opciones******" <<endl;
    cout << "1. Agregar un alumno" << endl;
    cout << "2. Listar todos los alumnos" << endl;
    cout << "3. Buscar alumno por legajo" << endl;
    cout << "4. Buscar alumno por DNI" << endl;
    cout << "5. Ordenar archivo por legajo" << endl;
    cout << "6. Salir" << endl;
}

void agregarAlumno(char ruta[]){
    //TODO Funcion para agregar un alumno al archivo
    FILE *file_;
    Alumno al;
    file_ = fopen(ruta, "ab+");
    if (file_){
        cout << "****Ingrese datos del alumno****"<< endl;
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
        fwrite(&al, sizeof(Alumno), 1, file_);
        fclose(file_);
    }
}

void listarAlumnos(char ruta[]){
    //TODO Funcion para listar todos los alumnos del archivo
    FILE *file_;
    Alumno al;
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
}

bool buscarLegajo(char ruta[], char legajo[], Alumno &al){
    //TODO Funcion para buscar por legajo y retornar el Alumno
    FILE *file_;
    bool encontrado = false;
    file_ = fopen(ruta, "rb");
    if (file_){
      while(fread(&al, sizeof(Alumno), 1, file_) && !encontrado){
          if (!strcmp(al.legajo, legajo)){
              encontrado = true;
          }

      }
      if (encontrado)
            return true;
      else
          return false;
    }
    else
        return false;
}

bool buscarDNI(char ruta[], char dni[], Alumno &al){
    //TODO Funcion para buscar por DNI y retornar el Alumno
    FILE *file_;
    bool encontrado = false;
    file_ = fopen(ruta, "rb");
    if (file_){
        while(fread(&al, sizeof(Alumno), 1, file_) && !encontrado){
            if (!strcmp(al.dni, dni)){
                encontrado = true;
            }
        }
        if (encontrado)
            return true;
        else
            return false;
    }
    else
        return false;
}

void ordenarPorLegajo(){
    //TODO Funcion para ordernar el archivo por legajo
}

int main() {
    int opcion;
    bool salir = false;
    Alumno alumno_buscado;
    char ruta[200] = "/home/matt/CLionProjects/RepoUTN/AyED_Ejercicios/"
                     "Archivos_Ejercicios/carpetadearchivos/Ejercicio_07.bin";

    char legajo_buscado[10];
    char dni_buscado[9];
    while(!salir) {
        menu();
        cin >> opcion;
        switch (opcion) {
            case 1:
                agregarAlumno(ruta);
                break;
            case 2:
                listarAlumnos(ruta);
                break;
            case 3:
                cout << "Ingrese legajo a buscar: ";
                cin >> legajo_buscado;
                if (buscarLegajo(ruta, legajo_buscado, alumno_buscado)){
                    cout << "************ Datos de alumno buscado ************"<< endl;
                    cout << "Nombre: " << alumno_buscado.nombre << endl;
                    cout << "Apellido: " << alumno_buscado.apellido << endl;
                    cout << "Legajo: " << alumno_buscado.legajo << endl;
                    cout << "DNI: " << alumno_buscado.dni << endl;
                    cout << "Fecha de nacimiento: " << alumno_buscado.fecha_de_nacimiento << endl;


                } else
                    cout << "No se encontro alumno o no se pudo leer archivo" << endl;
               break;
            case 4:
                cout << "Ingrese DNI a buscar: ";
                cin >> dni_buscado;
                if (buscarLegajo(ruta, dni_buscado, alumno_buscado)){
                    cout << "************ Datos de alumno buscado ************"<< endl;
                    cout << "Nombre: " << alumno_buscado.nombre << endl;
                    cout << "Apellido: " << alumno_buscado.apellido << endl;
                    cout << "Legajo: " << alumno_buscado.legajo << endl;
                    cout << "DNI: " << alumno_buscado.dni << endl;
                    cout << "Fecha de nacimiento: " << alumno_buscado.fecha_de_nacimiento << endl;
                } else
                    cout << "No se encontro alumno o no se pudo leer archivo" << endl;
               break;
//            case 5:
//                break;
            case 6:
                salir = true;
                break;
            default:
                salir = true;
                break;
        }
    }


    return 0;
}

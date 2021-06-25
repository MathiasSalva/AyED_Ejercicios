#include <iostream>

using namespace std;

int EdadAGrupoEtario(int edad);


int EdadAGrupoEtario(int edad){
    if (edad <= 14)
        return 1;
    else if (edad <= 21)
        return 2;
    else if (edad <= 28)
        return 3;
    else if (edad <= 35)
        return 4;
    else if (edad <= 42)
        return 5;
    else if (edad <= 49)
        return 6;
    else if (edad <= 63)
        return 7;
    else
        return 8;
}

int main() {
    int edad;
    cout << "Ingresar edad: ";
    cin >> edad;
    cout << endl;

    cout << "Valor: " << EdadAGrupoEtario(edad) << endl;
    return 0;
}

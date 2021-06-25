#include <iostream>
#include <cstring>
// 100 contenedores
// puerto 1, puerto 2, puerto 3
/* Datos de contenedores
 * - ID
 * - Peso (kg)
 * - Puerto de arribo (1 a 3)
*/

using namespace std;
int main() {
    float peso, max_peso = 0.0, total = 0.0;
    char id[255], id_max_peso[255];
    unsigned int puerto;
    int cont_p1 = 0, cont_p2 = 0, cont_p3 = 0;

    for (int i = 0; i < 3; i++){
        cout << "Ingrese los datos del container numero " << i << ": " << endl;
        cout << "ID: ";
        cin >> id;
        fflush(stdin);
        cout << "Peso: ";
        cin >> peso;
        cout << "Puerto: ";
        cin >> puerto;

        // Peso total
        total += peso;
        // ID del container con mayor peso
        if (peso > max_peso){
            max_peso = peso;
            strcpy(id_max_peso, id);
        }
        // Puerto
        switch (puerto) {
            case 1:
                cont_p1++;
                break;
            case 2:
                cont_p2++;
                break;
            case 3:
                cont_p3++;
                break;
            default:
                break;
        }
    }

    cout << "Peso total: " << total << endl;
    cout << "Contenedor con mayor peso ID: " << id_max_peso << endl;
    cout << "---Cantidad de contendores por puerto---" << endl;
    cout << "Puerto 1: " << cont_p1 << endl;
    cout << "Puerto 2: " << cont_p2 << endl;
    cout << "Puerto 3: " << cont_p3 << endl;
    return 0;
}

#include <iostream>
#include <cstring>
#include <stdio.h>

void clean_stdin(void)
{
    int c;
    do {
        c = getchar();
    } while (c != '\n' && c != EOF);
}

using namespace std;

// Pre-requisitos
/* 1. La cantidad de vuelos M debe pertenecer a los numeros naturales (enteros positivos)
 * 2. El numero de vuelo debe pertenecer a los numeros naturales (enteros postiivos)
 * 3. El numero de asientos pertenecer a los numeros naturales (enteros postiivos)
 * 4. El destino no debe poseer mas de 50 caracteres.
 */

int main() {
    unsigned int vuelos;
    unsigned int n_vuelo;
    unsigned int asientos;
    int asientos_ocupados;
    float porc_asientos_ocupados, porc_asientos_libres;
    char str_porc_ocupados[15], str_porc_libres[15];
    int pasajero = 0;
    char str_pasaporte[30], str_n_vuelo[30], str_pago[30];
    char datos_pasajero[100] = "", datos_vuelo[1000] = "", datos_totales[5000] = "";
    float pago, total_vuelo = 0, total_mes = 0;
    char destino[51];
    int pasaporte = 1;

    cout << "Ingrese cantidad de vuelos: ";
    cin >> vuelos;
    cout << endl;

    for (int i = 0; i < vuelos; i++){
        cout << "Ingrese numero de vuelo: ";
        cin >> n_vuelo;
        cout << endl;
        cout << "Ingrese destino: ";
        clean_stdin();
        fgets(destino, 51, stdin);
        cout << endl << "Ingrese cantidad de asientos: ";
        cin >> asientos;
        cout << endl;
        cout << "Ingrese pasaporte del pasajero nro 1:";
        cin >> pasaporte;
        while (pasaporte){
            pasajero++;
            cout << endl << "Importe abonado (U$D): $";
            cin >> pago;
            cout << endl;

            total_vuelo += pago;

            sprintf(str_pasaporte, "%i", pasaporte);
            sprintf(str_pago, "%f", pago);
            strcat(datos_pasajero, "\n");
            strcat(datos_pasajero, "Nro. de Pasaporte\n");
            strcat(datos_pasajero, str_pasaporte);
            strcat(datos_pasajero, "\n");
            strcat(datos_pasajero, "Importe abonado\n");
            strcat(datos_pasajero, "$");
            strcat(datos_pasajero, str_pago);
            strcat(datos_pasajero, "\n\r");


            cout << "Ingrese pasaporte del pasajero nro " << pasajero + 1 << ": ";
            cin >> pasaporte;
        }
        asientos_ocupados = asientos - (asientos - pasajero);
        porc_asientos_ocupados = (asientos_ocupados * 100) / asientos;
        porc_asientos_libres = ((asientos - pasajero) * 100) / asientos;

        sprintf(str_porc_libres, "%f", porc_asientos_libres);
        sprintf(str_porc_ocupados, "%f", porc_asientos_ocupados);
        sprintf(str_n_vuelo, "%i", n_vuelo);
        fflush(stdout);
        strcat(datos_vuelo, "Nro de vuelo: ");
        strcat(datos_vuelo, str_n_vuelo);
        strcat(datos_vuelo, "         ");
        strcat(datos_vuelo, "Destino: ");
        strcat(datos_vuelo, destino);
        strcat(datos_vuelo, "% de Asientos Libres de vuelo: ");
        strcat(datos_vuelo, str_porc_libres);
        strcat(datos_vuelo, "\n");
        strcat(datos_vuelo, "% de Asientos Ocupados del vuelo: ");
        strcat(datos_vuelo, str_porc_ocupados);
        strcat(datos_vuelo, "\n");

        total_mes += total_vuelo;
        pasajero = 0;
    }
    strcat(datos_totales, datos_vuelo);

    cout << datos_vuelo;


    return 0;
}

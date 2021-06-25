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
    unsigned int n_vuelo, n_vuelo_recaudo;
    unsigned int asientos;
    int asientos_ocupados;
    int llenos_seguidos = 0, racha = 0;
    bool lleno;
    float porc_asientos_ocupados, porc_asientos_libres;
    char str_porc_ocupados[15], str_porc_libres[15];
    int pasajero = 0;
    char str_pasaporte[30], str_n_vuelo[30], str_pago[30];
    char datos_pasajero[5000] = "", datos_vuelo[10000] = "", datos_totales[50000] = "";
    float pago, total_vuelo = 0, total_mes = 0, mayor_recaudo = 0;
    char destino[51];
    int pasaporte = 1;

    cout << "Ingrese cantidad de vuelos: ";
    cin >> vuelos;
    cout << endl;

    for (int i = 0; i < vuelos; i++){
        strcpy_s(datos_pasajero, "");
        cout << "Ingrese numero de vuelo: ";
        cin >> n_vuelo;
        cout << endl;
        fflush(stdout);
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
            strcat_s(datos_pasajero, "\n");
            strcat_s(datos_pasajero, "Nro. de Pasaporte\n");
            strcat_s(datos_pasajero, str_pasaporte);
            strcat_s(datos_pasajero, "\n");
            strcat_s(datos_pasajero, "Importe abonado\n");
            strcat_s(datos_pasajero, "$");
            strcat_s(datos_pasajero, str_pago);
            strcat_s(datos_pasajero, "\n");


            cout << "Ingrese pasaporte del pasajero nro " << pasajero + 1 << ": ";
            cin >> pasaporte;
        }
        cout << endl;
        asientos_ocupados = asientos - (asientos - pasajero);
        porc_asientos_ocupados = (asientos_ocupados * 100) / asientos;
        porc_asientos_libres = ((asientos - pasajero) * 100) / asientos;

        // Check vuelos llenos
        if (!(asientos - asientos_ocupados)) {
            lleno = true;
        } else {
            lleno = false;
        }
        // Contador de racha
        if (lleno){
            llenos_seguidos++;
        } else {
            llenos_seguidos = 0;
        }
        // Racha maxima
        if (llenos_seguidos > racha){
            racha = llenos_seguidos;
        }

        sprintf(str_porc_libres, "%f", porc_asientos_libres);
        sprintf(str_porc_ocupados, "%f", porc_asientos_ocupados);
        sprintf(str_n_vuelo, "%i", n_vuelo);
        fflush(stdout);
        strcat_s(datos_vuelo, "\n=============================================\n");
        strcat_s(datos_vuelo, "Nro de vuelo: ");
        strcat_s(datos_vuelo, str_n_vuelo);
        strcat_s(datos_vuelo, "         ");
        strcat_s(datos_vuelo, "Destino: ");
        strcat_s(datos_vuelo, destino);
        strcat_s(datos_vuelo, "=============================================");
        strcat_s(datos_vuelo, datos_pasajero);
        strcat_s(datos_vuelo, "\n");
        strcat_s(datos_vuelo, "% de Asientos Libres de vuelo: ");
        strcat_s(datos_vuelo, str_porc_libres);
        strcat_s(datos_vuelo, "\n");
        strcat_s(datos_vuelo, "% de Asientos Ocupados del vuelo: ");
        strcat_s(datos_vuelo, str_porc_ocupados);
        strcat_s(datos_vuelo, "\n=============================================");
        strcat_s(datos_vuelo, "\n\r");

        total_mes += total_vuelo;

        if (total_vuelo > mayor_recaudo){
            mayor_recaudo = total_vuelo;
            n_vuelo_recaudo = n_vuelo;

        }

        pasajero = 0;
    }
    strcat_s(datos_totales, datos_vuelo);

    cout << datos_vuelo;
    cout << endl;
    cout << "Total recaudado en el mes: $" << total_mes << endl;
    cout << "Cantidad de veces seguidas que se dieron vuelos completos: " << racha << endl;
    cout << "Numero de vuelo que mayor recaudo: " << n_vuelo_recaudo << endl;


    return 0;
}

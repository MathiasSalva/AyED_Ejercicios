#include <iostream>
#include <conio.h>
#include <stdlib.h>
#define LONG 10
#define VACIO -10000

//const int vacio =-1000;
typedef int mi_tdato;
using namespace std;

//Inicializa el vecto con valores vacíos
void inicializar(mi_tdato v[], int tam)
{
    for (int i = 0; i < tam; i++)
    {
            v[i] = VACIO;
    }
    return;
}

//Muestra el vector por pantalla
void mostrar(const mi_tdato v[], int tam)
{
    for (int i = 0; i < tam; i++)
    {
            cout << "v[" << i << "] = " << v[i] << endl;
    }
    //v[2] = 20;
    return;
}

int cantElementos(const mi_tdato vec[], int tam)
{
    int i = 0;
    while ( i < tam && vec[i]!= VACIO)
        i++;
    return i;

}



/* Función insertar: Recibe por parámetros el dato a insertar y el vector.
Intenta insertarlo en el primer lugar que encuentre vacío, si lo hace devuelve
cero, si el vector está lleno devuelve código de error= 1 */
int insertar(mi_tdato dato, mi_tdato v[], int tam)
{
    int i = 0;
    int error=0;
    while (i< tam && v[i]!=VACIO)
        i++;
    if (i < tam)
        v[i] = dato;
    else
        error = 1;
    return error;
}

/* Función insertarordenado: Recibe por parámetros el dato a insertar y el vector.
Intenta insertarlo de forma ordenada, si lo hace devuelve
cero, sino, si el vector está lleno devuelve código de error= 1 */
int insertarOrdenado(mi_tdato dato, mi_tdato v[], int tam)
{
    int i = 0;
    int cant_elementos = 0;
    if (v[tam-1] == VACIO)//hay espacio para insertar
    {
        while (v[i]< dato && v[i]!=VACIO)
            i++;
        if (v[i] == VACIO)
            v[i] = dato;
        else
        {
            cant_elementos = cantElementos(v, tam);// DETERMINA TAMAÑO LOGICO
            for (int j= cant_elementos-1; j>=i; j--)
                v[j+1] = v[j];
            v[i] = dato;
        }
        return 0;
    }
    else
        return 1; //vector lleno
}



/* busquedaSecuencial:
Devuelve -1 si no se encuentra el valor,
caso contrario devuelve la posición del vector donde está el valor buscado */
int busquedaSecuencial(const mi_tdato v[], int buscado, int tam)
{
    int i= 0;
    int posbuscado = -1;
    while (i< tam && posbuscado==(-1) )
    {
        if (v[i]==buscado)
        {
            posbuscado = i;
        }
        i++;
    }
    return posbuscado;
}


void mostrarmenu()
{
    cout << "Ingrese una opción:" << endl;
    cout << "b - Ingresar un valor" << endl;
    cout << "c - Mostrar vector" << endl;
    cout << "f - Indicar cantidad de elementos" << endl;
    cout << "h - Buscar elemento (secuencial)" << endl;
    cout << "Esc - Salir" << endl;
}



int main()
{
    mi_tdato vec[LONG];
    mi_tdato dato;
    inicializar(vec, LONG);
    char opcion;
    do
    {
        mostrarmenu();
        do
        {
                opcion=getch();
        } while (opcion!=27 &&
                 !(opcion>='A' && opcion<='H') &&
                 !(opcion>='a' && opcion<='h')
                 );

        switch (opcion)
        {

            case 'b':
            case 'B':
                    cout << "Ingrese el dato a almacenar" << endl;
                    cin >> dato;
                    if (insertarOrdenado(dato, vec, LONG))
                        cout << "Error al intentar ingresar el dato. Vector lleno" << endl;
                    else
                        cout << "Dato ingresado correctamnte" << endl;
                break;
            case 'c':
            case 'C':
                    mostrar(vec, LONG);
                break;
            case 'f':
            case 'F':
                    cout << "La cantidad de elementos es " << cantElementos(vec, LONG) << endl;
                break;
            case 'h':
            case 'H':
                    int posicion;
                    cout << "Ingrese el elemento a buscar (BUSQ. SECUENCIAL): " << endl;
                    cin >> dato;
                    posicion = busquedaSecuencial(vec, dato,LONG);
                    if (posicion != -1)
                        cout << "El elemento se encuentra en la posicion: " << posicion << endl;
                    else
                        cout << "No se encuentra el elemento.";
                break;
        }
        cout << "Presione una tecla para continuar." << endl;
        getch();
        //system("c:\\ayed2014\\x.docx");
        system("cls");
    } while (opcion != 27); //27 es el código ascii de la tecla Esc. Tengo que convertirlo a int para obtener su código en tabla
    return 0;
}

#include <iostream>
#include <string.h>
using namespace std;


struct Pasaje
{
    int nro_boleto;
    char apellido[50];
    char nombres[50];
    char destino[50];
};

void cargar_struct(int boleto, char ap[], char nomb[], char dest[], Pasaje &p)
{
    p.nro_boleto = boleto;
    strcpy(p.apellido,  ap);
    strcpy(p.nombres, nomb);
    strcpy(p.destino, dest);
    return;
}

void mostrar_struct(Pasaje p)
{
    cout << "===== Datos del boleto: " << p.nro_boleto << " ========" << endl;
    cout << "Apellidos: " << p.apellido << endl;
    cout << "Nombres: " << p.nombres << endl;
    cout << "Destino: " << p.destino << endl;
    return;
}

int main()
{
    FILE *arch_pasajes = NULL;
    Pasaje p;
    char o;
    //cout << sizeof(Pasaje);
    do
    {
        cout << "Ingrese una opción:" << endl;
        cout << "1 - Grabar datos" << endl;
        cout << "2 - Leer datos" << endl;
        cout << "Esc - Salir" << endl;
        cin >> o;
        switch (o)
        {
            case '1':
                arch_pasajes = fopen("pasajes.data", "ab");
                if (arch_pasajes != NULL) //pude abrir el archivo
                {
                    cargar_struct(1098, "Llanos", "Erika", "Miami - USA", p);
                    fwrite(&p, sizeof(Pasaje), 1, arch_pasajes);
                    cargar_struct(2817, "Sapoznik", "Bruno", "Berlin - GER", p);
                    fwrite(&p, sizeof(Pasaje), 1, arch_pasajes);
                    fclose(arch_pasajes);
                }
                else
                cout << "No se pudo abrir el archivo." << endl;
                break;
            case '2':
                 arch_pasajes = fopen("pasajes.data", "rb");
                if (arch_pasajes != NULL) //pude abrir el archivo
                {
                    while (fread(&p, sizeof(Pasaje), 1, arch_pasajes)) //otra forma es utilizar feof
                        mostrar_struct(p);
                    fclose(arch_pasajes);
                }
                break;
        }
    }while(o != 27);

    return 0;
}

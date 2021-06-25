#include <iostream>
#include <stdio.h>
#include <cstring>

using namespace std;

// TODO:
//e) cantidad de encuestados en cada tipo de nivel de estudios alcanzados incompletos. (contar incompletos)
//f) porcentaje de encuestados de sexo femenino y masculino. (porcentajes M y F del total encuestado)

int main() {
    char domicilio[50], domicilio_max[50];
    char tipo_vivienda;
    int cont_m = 0, cont_f = 0;
    int integrantes, max_integrantes_depto = 0, poblacion = 0;
    int cont_incompletos_p = 0, cont_incompletos_s = 0, cont_incompletos_t = 0, cont_incompletos_u = 0;
    char nombre_apellido[50], str_edad[3], str_edad_promedio_familia[6];
    float edad_promedio_familia, edad_promedio_ciudad;
    int edad, integrantes_totales = 0, cantidad_analfabetas = 0, porcentaje_analfabetas, edad_total=0, edad_familia=0;
    char sexo, estudios, estado;
    char str_estudios[3], str_estado[3], str_sexo[3];
    char estudios_primarios[2000] = "", promedios_edad_familias[1000] = "";

    cout << "Ingrese cantidad de integrantes" << endl;
    cin >> integrantes;
    while (integrantes) {
        cout << "Ingrese domicilio" << endl;
        fflush(stdin);
        fgets(domicilio, 50, stdin);
        fflush(stdin);
        cout << "Ingrese tipo de vivienda" << endl;
        cin >> tipo_vivienda;
        for (int i = 0; i < integrantes; i++) {
            integrantes_totales++;
            cout << "Integrante " << i + 1 << endl;
            cout << "Ingrese nombre y apellido" << endl;
            fflush(stdin);
            fgets(nombre_apellido, 50, stdin);
            cout << "Ingrese edad" << endl;
            cin >> edad;
            cout << "Ingrese sexo" << endl;
            cin >> sexo;
            cout << "Ingrese estudios" << endl;
            cin >> estudios;
            cout << "Ingrese estado" << endl;
            cin >> estado;

            if ((estudios == 'P' && estado == 'C') || estudios == 'S' || estudios == 'T' || estudios == 'U') {
                sprintf(str_edad, "%d", edad);
                sprintf(str_estudios, "%c", estudios);
                sprintf(str_estado, "%c", estado);
                sprintf(str_sexo, "%c", sexo);
                strcat(estudios_primarios, "Nombre y apellido: ");
                strcat(estudios_primarios, nombre_apellido);
                strcat(estudios_primarios, "Edad: ");
                strcat(estudios_primarios, str_edad);
                strcat(estudios_primarios, "\n");
                strcat(estudios_primarios, "Sexo: ");
                strcat(estudios_primarios, str_sexo);
                strcat(estudios_primarios, "\n");
                strcat(estudios_primarios, "Estudios: ");
                strcat(estudios_primarios, str_estudios);
                strcat(estudios_primarios, "\n");
                strcat(estudios_primarios, "Estado: ");
                strcat(estudios_primarios, str_estado);
                strcat(estudios_primarios, "\n\r");
            }
            if (edad > 10 && estudios == 'N')
                cantidad_analfabetas++;

            if (tipo_vivienda == 'D' && (integrantes > max_integrantes_depto)){
                max_integrantes_depto = integrantes;
                strcpy(domicilio_max, domicilio);
            }
            if (estudios == 'P' && estado == 'I'){
                cont_incompletos_p++;
            } else if (estudios == 'S' && estado == 'I'){
                cont_incompletos_s++;
            } else if (estudios == 'T' && estado == 'I') {
                cont_incompletos_t++;
            } else if (estudios == 'U' && estado == 'I') {
                cont_incompletos_u++;
            }
            if (sexo == 'M')
                cont_m++;
            else if (sexo == 'F')
                cont_f++;
        edad_familia += edad;
        edad_total += edad;
        }
        edad_promedio_familia = edad_familia / integrantes;
        sprintf(str_edad_promedio_familia, "%f", edad_promedio_familia);
        strcat(promedios_edad_familias, "Familia Domicilio: ");
        strcat(promedios_edad_familias, domicilio);
        strcat(promedios_edad_familias, "Promedio de edad:");
        strcat(promedios_edad_familias, str_edad_promedio_familia);
        strcat(promedios_edad_familias, "\n");

        poblacion += integrantes;
        edad_familia = 0;
        cout << "Ingrese cantidad de integrantes" << endl;
        cin >> integrantes;
    }
    edad_promedio_ciudad = edad_total / poblacion;
    cout << endl << "Personas con estudios primarios completos: " << endl;
    cout << estudios_primarios << endl;
    porcentaje_analfabetas = (cantidad_analfabetas * 100) / integrantes_totales;
    cout << "Porcentaje de analfabetas: " << porcentaje_analfabetas << "%" << endl;
    cout << "Depto. con mayor cantidad de integrantes: " << domicilio_max << endl;
    cout << "Promedios de edad por familia:" << endl;
    cout << promedios_edad_familias << endl;
    cout << "Promedio de edad de la ciudad: " << edad_promedio_ciudad << endl;
    cout << "Personas con primario incompleto: " << cont_incompletos_p << endl;
    cout << "Personas con secundario incompleto: " << cont_incompletos_s << endl;
    cout << "Personas con terciario incompleto: " << cont_incompletos_t << endl;
    cout << "Personas con universitario incompleto: " << cont_incompletos_u << endl;
    cout << "Porcentaje de hombres: " << (cont_m * 100) / integrantes_totales << "%" << endl;
    cout << "Porcentaje de mujeres: " << (cont_f * 100) / integrantes_totales << "%" << endl;
    return 0;
}

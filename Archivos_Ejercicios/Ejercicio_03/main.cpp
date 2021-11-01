#include <iostream>

using namespace std;

void crearArchivos(){
    // Crear 2 archivos con numeros enteros
    FILE *f1, *f2, *f_final;
    int n[5] = {0, 2, 4, 6, 8};
    int n2[5] = {1, 3, 5, 7, 9};
    int n3[10];
    char ruta_del_archivo1[1000] = "/home/matt/CLionProjects/RepoUTN/AyED_Ejercicios/Archivos_Ejercicios/carpetadearchivos/Ejercicio3_f1.bin";
    char ruta_del_archivo2[1000] = "/home/matt/CLionProjects/RepoUTN/AyED_Ejercicios/Archivos_Ejercicios/carpetadearchivos/Ejercicio3_f2.bin";
    f1 = fopen(ruta_del_archivo1, "wb+");
    fwrite(n, sizeof(int), 5, f1);
    fclose(f1);
    f2 = fopen(ruta_del_archivo2, "wb+");
    fwrite(n2, sizeof(int), 5, f2);
    fclose(f2);
}

void leerArchivo(FILE *f, char ruta[], int tam_ruta, int vec[], int tam_vec){
    f = fopen(ruta, "rb+");
    fread(vec, sizeof(int), tam_vec, f);
    fclose(f);
}

void apareo(int vec1[], int tam1, int vec2[], int tam2, int vec3[])
{
    int i = 0,j = 0,k = 0;
    while (i < tam1 && j < tam2)
    {
        if (vec1[i] < vec2[j])
        {
            vec3[k] = vec1[i];
            i++;
        }
        else
        {
            vec3[k] = vec2[j];
            j++;
        }
        k++;
    }
    for (int cont=i; cont < tam1; cont++)
    {
        vec3[k] = vec1[cont];
        k++;
    }
    for (int cont=j; cont < tam2; cont++)
    {
        vec3[k] = vec2[cont];
        k++;
    }
}

int main() {
    FILE *file_;
    crearArchivos();
    int vec1[5], vec2[5], vec3[10], vec_archivo[10];
    char ruta_archivo1[200] = "/home/matt/CLionProjects/RepoUTN/AyED_Ejercicios/Archivos_Ejercicios/carpetadearchivos/Ejercicio3_f1.bin";
    char ruta_archivo2[200] = "/home/matt/CLionProjects/RepoUTN/AyED_Ejercicios/Archivos_Ejercicios/carpetadearchivos/Ejercicio3_f2.bin";
    char ruta_archivo3[200] = "/home/matt/CLionProjects/RepoUTN/AyED_Ejercicios/Archivos_Ejercicios/carpetadearchivos/Ejercicio3_f3.bin";
    leerArchivo(file_, ruta_archivo1, 200, vec1, 5);
    leerArchivo(file_, ruta_archivo2, 200, vec2, 5);

    for(int i = 0; i < 5; i++){
        cout << "vec1[" << i << "] = " << vec1[i] << endl;
        cout << "vec2[" << i << "] = " << vec2[i] << endl;
        cout << "********" << endl;
    }

    apareo(vec1, 5, vec2, 5, vec3);

    file_ = fopen(ruta_archivo3, "wb+");
    if (file_){
        fwrite(vec3, sizeof(int), 10, file_);
        fclose(file_);
    }
    file_ = fopen(ruta_archivo3, "rb+");
    if(file_){
        fread(vec_archivo, sizeof(int), 10, file_);
        for(int i = 0; i < 10; i++){
            cout << "vec_archivo[" << i << "] = " << vec_archivo[i] << endl;
        }

        fclose(file_);
    }



    return 0;
}

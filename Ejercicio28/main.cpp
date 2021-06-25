#include <iostream>

using namespace std;

int main() {
    int i = 0;
    int palabras = 0, letras = 0, palabra_mas_larga = 0;
    int cont_a = 0, cont_e = 0, cont_i = 0, cont_o = 0, cont_u = 0;
    char oracion[1000];

    cout << "Ingresar oracion: " << endl;

    fflush(stdin);
    fgets(oracion, 1000, stdin);

    while(oracion[i] != '\n'){
        switch (oracion[i]) {
            case 'a':
            case 'A':
                cont_a++;
                break;
            case 'e':
            case 'E':
                cont_e++;
                break;
            case 'i':
            case 'I':
                cont_i++;
                break;
            case 'o':
            case 'O':
                cont_o++;
                break;
            case 'u':
            case 'U':
                cont_u++;
                break;
            default:
                break;
        }
        if (oracion[i] == ' ' || oracion[i] == '.'){
            palabras++;
            if (letras > palabra_mas_larga){
                palabra_mas_larga = letras;
            }
            letras = 0;
        } else
            letras ++;


        i++;
    }

    cout << "-Cantidad de vocales-" << endl;
    cout << "A: " << cont_a << endl;
    cout << "E: " << cont_e << endl;
    cout << "I: " << cont_i << endl;
    cout << "O: " << cont_o << endl;
    cout << "U: " << cont_u << endl;
    cout << endl;
    cout << "Cantidad de palabras "<< endl;
    cout << "Palabras: " << palabras << endl;
    cout << "La palabra mas larga tiene " << palabra_mas_larga << " letras." << endl;


    return 0;
}

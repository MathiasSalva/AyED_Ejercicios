#include <iostream>
#define LONG 5

using namespace std;

int main() {
    int i = 0;
    bool end = false;
    char palabra[LONG] = "\0", caracter;

    while (i < LONG && !end){
        cout << "Ingrese caracter" << endl;
        cin >> caracter;
        if (caracter != '/'){
            palabra[i] = caracter;
            i++;
        }
        else
            end = true;
    }
    cout << "La palabra es: ";
    for (int i = 0; i < LONG; i++)
        cout << palabra[i];
    cout << endl << "La palabra invertida es: ";
    for (int i = 0; i <= LONG; i++)
        cout << palabra[LONG-i];




    return 0;
}

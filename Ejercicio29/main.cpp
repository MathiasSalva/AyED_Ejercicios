#include <iostream>
using namespace std;

int main() {
    int numero, cociente;
    float resto;
    float div;


    cin >> numero;

    while (!resto){
    if (numero >= 1000){
        cociente = numero / 1000;
        resto = numero - (cociente * 1000);
    } else if (numero >= 900) {
    } else if (numero >= 500) {
    } else if (numero >= 400) {
    } else if (numero >= 100) {
    } else if (numero >= 90) {
    } else if (numero >= 50) {
    } else if (numero >= 40) {
    } else if (numero >= 10) {
    } else if (numero >= 9) {
    } else if (numero >= 5) {
    } else if (numero >= 4) {
    } else if (numero >= 1) {
        cociente = numero / 1000;
        resto = numero - (cociente * 1000);
    }
    }


    return 0;
}

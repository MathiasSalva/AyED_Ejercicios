#include <iostream>
using namespace std;

int main() {
    int numero, n, anterior, total_negs = 0, total = 0;
    int cont_cero = 0, cont_total = 0, cont_pos = 0;
    bool limite_promedio = false;
    // 1)
    //for (int i = 0; i < 167; i++){
    // 2) 4)
    cin >> n;

    //for (int i = 0; i < n; i++){
    // 3)
    //while (numero != anterior){
    for (int i = 0; i < n && cont_cero <= 4 && !limite_promedio; i++) {
        // 1) 2)
        cin >> numero;
        if (numero == 0){
            cont_cero ++;
        }
        else if (numero > 0 ){
            cont_pos++;
            total += numero;
        }
        else if (numero < 0 ){
            total_negs += numero;
        }

        if (cont_pos > 0){
            if (total / cont_pos > 6)
                limite_promedio = true;
        }
       anterior = numero;
    }
    // a
    cout << "Cantidad de ceros: " << cont_cero << endl;
    // b
    cout << "Promedio de valores positivos: " << total / cont_pos << endl;
    // c
    cout << "Sumatoria de valores negativos: " << total_negs << endl;
    return 0;
}

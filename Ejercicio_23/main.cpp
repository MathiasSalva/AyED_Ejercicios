#include <iostream>

using namespace std;

int main() {
    float n, max_neg = 0, min_pos = 0, rang = 0, avg = 0, count = 0, count_pos = 0, count_neg = 0;

    cin >> n;
    while (n != 0) {


        if (n < 0){
            if (n > max_neg || count_neg == 0){
                max_neg = n;
                count_neg++;
            }

        }
        else {
            if (n < min_pos || count_pos == 0){
                min_pos = n;
                count_pos++;
            }

        }
        if (n > -17.3 && n < 26.9){
            if (n < rang || count == 0){
                rang = n;
            }
        }

        avg += n;
        count++;
        cin >> n;

    }

    cout << "El maximo negativo es " << max_neg << endl;
    cout <<  "El minimo positivo es " << min_pos << endl;
    cout << "El minimo dentro del rango -17.3 y 26.9 es " << rang << endl;
    cout << "El promedio de los numeros es " << avg/count << endl;
    return 0;
}

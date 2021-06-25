#include <iostream>

using namespace std;

float CalcularPorcentajeDiferencia(int A, int B);


float CalcularPorcentajeDiferencia(int A, int B) {

    return (B-A) * 100/(A+B);

}

int main() {
    cout << CalcularPorcentajeDiferencia(30, 50) << endl;
    return 0;
}

#include <iostream>

using namespace std;

int mcd(int a, int b){
    int resto, mcd;

    while (a % b){
        resto = a % b;
        a = b;
        b = resto;
    }
    mcd = b;
    return mcd;
}

int factorial(int n) {

    if (n <= 1)

        return 1;

    else

        return (n * factorial(n-1));

}

int main() {
    int n, cont_m_3 = 0, cont_m_5 = 0, cont_both = 0;

    cout << "Ingresar numeros" << endl;
    for (int i = 0; i < 10; i++){
        cin >> n;
        cout << "Factorial: " << factorial(n) << endl;
        if (mcd(n, 3) == 3 && mcd(n, 5) == 5){
            cont_both++;
        } else if(mcd(n, 3) == 3)
            cont_m_3++;
        else if (mcd(n, 5) == 5)
            cont_m_5++;
    }
    cout << endl;
    cout << "Multiplos de 3: " << cont_m_3 << endl;
    cout << "Multiplos de 5: " << cont_m_5 << endl;
    cout << "Multiplos de 3 y 5: " << cont_both << endl;

    return 0;
}

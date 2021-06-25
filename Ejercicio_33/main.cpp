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

int main() {
    int a, b;
    cout << "Ingresar los numeros para encontrar el MCD" << endl;
    cin >> a >> b;
    cout << "El MCD de "<< a << " y " << b << " es " << mcd(a, b) << endl;
    return 0;
}

#include <iostream>
#include <strings.h>

using namespace std;

string Tendencia(int A, int B){

    if ((B - A) < 0){
        return "Decreciente";
    }
    else if ((B - A) < (A * 0.05) ) {
        return "Leve ascenso";
    }
    else if ( (B - A) < (A * 0.02)) {
        return "Estable";
    }

    else {
        return "En ascenso";
    }

}


int main() {
    int A, B;
    cout << "Ingrese A" << endl;
    cin >> A;
    cout << "Ingrese B" << endl;
    cin >> B;

    cout << Tendencia(A, B) << endl;

    return 0;
}

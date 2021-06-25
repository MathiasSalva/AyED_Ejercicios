#include <iostream>
#include <cstring>

using namespace std;
int mcm(int div, int x, int y);
float simplificada (unsigned int p, unsigned int q);

float simplificada (unsigned int p, unsigned int q) {
    int div = 2;
    cout << p << "/" << q << endl;
    char simpl[32] = "", str_p[6], str_q[6];
    for (div; div <= p || div <= q; div++){
        while (p % div == 0 && q % div == 0){
            p = p / div;
            q = q / div;
            cout << p << "/" << q << endl;
        }
    }
    return p / q;
//    sprintf(str_p, "%i", p);
//    sprintf(str_q, "%i", q);
//    strcat(simpl, str_p);
//    strcat(simpl, "/");
//    strcat(simpl, str_q);
//    cout << simpl << endl;
}

int mcm(int div, int x, int y){
    int aux=1;
    while(x % div == 0 || y % div == 0){
        aux *= div;
            if (x % div==0){
                x /= div;
            }
            if (y % div==0){
                y /= div;
            }
    }
    if (div <=x || div <= y){
        aux *= mcm(div+1,x,y);
    }
    return aux;
}

int main() {
    unsigned int p, q;
    float simp;
    cin >> p;
    cin >> q;
    simp = simplificada(p, q);
    cout << "Menor factor comun: " << mcm(2, p, q) << endl;
    cout << simp << endl;
}

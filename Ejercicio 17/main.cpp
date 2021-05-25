#include <iostream>
using namespace std;
int main() {
    float sueldo;
    int s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    cin >> sueldo;
    while (sueldo != 0)
    {

        if (sueldo < 1520.0)
            s1 += 1;
        else if (sueldo < 2780.0)
            s2 += 1;
        else if (sueldo < 5999.0)
            s3 += 1;
        else
            s4 += 1;
        cin >> sueldo;
    }


    cout << "Empleados que ganan menos de $1.520: " << s1 << endl;
    cout << "Empleados que ganan $1.520 o mas pero menos de $2.780: " << s2 << endl;
    cout << "Empleados que ganan $2.780 o mas pero menos de $5.999: " << s3 << endl;
    cout << "Empleados que ganan $5.999 o mas: " << s4 << endl;

    return 0;
}

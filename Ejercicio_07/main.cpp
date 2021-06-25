#include <iostream>

using namespace std;

int main() {

    //Dado tres valores determinar e imprimir una leyenda según sea: “Forman
    //triangulo” o “No forman triangulo”.

    int a, b, c;

    cin >> a >> b >> c;

    if (a + b > c && b + c > a && a + c > b)

    {
        cout << "Forman triangulo" << endl;
    }

    else

    {
        cout << "No forman triangulo" << endl;
    }

    return 0;
}

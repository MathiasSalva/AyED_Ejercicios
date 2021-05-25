#include <iostream>

using namespace std;

int main() {
    int edad;

    cin >> edad;

    if (edad <= 12)
        cout << "menor" << endl;

    else if (edad <= 18)
        cout << "cadete" << endl;

    else if (edad <= 26)
        cout << "juvenil" << endl;

    else
        cout << "mayor" << endl;

    return 0;
}


#include <iostream>

using namespace std;

int main() {
    int i, n, mayor = 0;
    for (i = 0; i < 10; i++)
    {
        cin >> n;
        if (n > mayor)
        {
            mayor = n;
        }
    }

    cout << "El mayor es " << mayor << endl;

    return 0;
}

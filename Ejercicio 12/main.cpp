#include <iostream>

using namespace std;

int main() {
    int suma = 0;

    for (int i=1; i < 101; i++)
    {
        cout << i << endl;
        suma += i;
    }

    cout << "Sumatoria: " << suma << endl;
    return 0;
}

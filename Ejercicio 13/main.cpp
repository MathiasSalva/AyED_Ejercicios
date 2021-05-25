#include <iostream>

using namespace std;
int main() {
    int n, m, producto;
    producto = 0;
    cin >> n >> m;
    for (int i = 0; i<n; i++)
    {
        producto += m;
        cout << n << " + " << m << " = " << producto << endl;
    }

    return 0;
}

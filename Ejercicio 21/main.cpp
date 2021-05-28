#include <iostream>

using namespace std;

int main() {
    int i, n, num, max, min, pos_max, pos_min;

    cout << "Ingrese cantidad de numeros" << endl;
    cin >> n;

    for (i = 0; i < n; i++)
    {
        cout << "Ingrese nuevo numero" << endl;
        cin >> num;

        if (i == 0)
        {
            max = num;
            min = num;
            pos_max = 1;
            pos_min = 1;
        } else
            {
            if (num > max)
                {
                max = num;
                pos_max = i + 1;
                }

            if (num < min)
                {
                min = num;
                pos_min = i + 1;
                }


            }
    }

            cout << "El mayor es " << max << endl;
            cout << "En la posicion " << pos_max << endl;
            cout << "El menor es " << min << endl;
            cout << "En la posicion " << pos_min << endl;

        return 0;
}

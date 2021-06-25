// Ejercicio4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
	int num, resto;
	float quinta, septima;

	cout << "Ingrese un numero entero: " << endl;
	cin >> num;

	quinta = (float)num / 5;
	resto = num % 5;
	septima = quinta / 7;

	cout << "Quinta parte del entero: " << quinta << endl;
	cout << "Resto de la quinta parte: " << resto << endl;
	cout << "Septima parte del primer calculo: " << septima << endl;

	return 0;
}

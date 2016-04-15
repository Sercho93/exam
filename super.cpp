// Sergio Zavaleta Cortés
#include <iostream>
using namespace std;

long superpower(long base, long potencia)
{
	long acum=1, contador=0;
	do
	{
		contador = contador + 1;
		acum = acum * base;

	}while(contador != potencia);

	return acum;
}

int main()
{
	int base, potencia;
	cout << "Este programa elevará un número a la potencia que desees." << endl;
	cout << "Ingresa el número base: ";
	cin >> base;
	cout << "Ingresa el número de la potencia: ";
	cin >> potencia;
	cout << "La respuesta es: "<< superpower(base, potencia) << endl;
}

#include <iostream>

using namespace std;

int main()
{
    int contador = 2; 
    int numero;
    int suma = 0;

    cout << "Ingresa un numero: ";
    cin >> numero;

    while (contador <= numero)
    {
        suma += contador;
        contador += 2; 
    }

    cout << "La suma de los numeros pares del 1 hasta " << numero << " es: " << suma << endl;

    return 0;
}
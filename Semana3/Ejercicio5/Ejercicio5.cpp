#include <iostream>

using namespace std;

// Verifico y después hago
int main()
{
    int contador = 1;
    int numero;
    int suma = 0;

    cout << "Ingrese un numero para iniciar el contador: ";
    cin >> numero; // 1

    // Ciclo while
    while (contador <= numero)
    {
        if (contador % 2 == 0)
        {
            suma += contador;
        }
        contador++;
        cout << "La suma de los numeros desde: " << numero << " es " << suma << endl; 
    }

    return 0;
}
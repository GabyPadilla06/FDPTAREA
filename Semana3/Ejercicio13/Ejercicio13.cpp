#include <iostream>

using namespace std;

int main()
{
    int numero;
    int termino = 1;
    int numeroActual = 0;
    int numeroSiguiente = 1;

    cout << "Ingresa cuantos terminos de Fibonacci deaseas ver: ";
    cin >> numero;

    cout << "Serie de Fibonacci (" << numero << " terminos): ";

    while (termino <= numero)
    {
        cout << numeroActual;

        if (termino < numero){
            cout << ", ";
        }

        int temp = numeroActual + numeroSiguiente;
        numeroActual = numeroSiguiente;
        numeroSiguiente = temp;

        termino++;
    }

    cout << endl;

    return 0;
}
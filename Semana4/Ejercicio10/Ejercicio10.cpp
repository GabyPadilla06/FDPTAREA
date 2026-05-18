#include <iostream>

using namespace std;

int main(){

    int numero, numeroActual = 0, numeroSiguiente = 1;

    cout << "Ingresa cuantos terminos de Fibonacci deaseas ver: ";
    cin >> numero;

    cout << "Serie de Fibonacci (" << numero << " terminos): ";

    for(int i = 1; i <= numero; i++){
        cout << numeroActual;

        if (i < numero){
            cout << ", ";
        }

        int temp = numeroActual + numeroSiguiente;
        numeroActual = numeroSiguiente;
        numeroSiguiente = temp;
    }

    cout << endl;

    return 0;
}
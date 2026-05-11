#include <iostream>

using namespace std;

int main(){

    int numero, suma = 0;

    cout << "Ingresa un numero: " << endl;
    cin >> numero;

    while (numero != 0)
    {
        suma += numero;

        cout << "Ingresa otro numero: " << endl;
        cin >> numero;
    }
    
    cout << "La suma de los numeros que ingresaste es: " << suma << endl; 

    return 0;
}
#include <iostream>

using namespace std;

int main() {
    int numero, suma = 0;

    // Solicitamos un número al usuario
    cout << "Ingresa un número entero: ";
    cin >> numero;

    for (int i = numero; i > 0; i /= 10) {
        suma += i % 10; // Extrae el último dígito y lo suma
    }

    // Mostrar el resultado
    cout << "La suma de los dígitos de " << numero << " es: " << suma << endl;

    return 0;
}

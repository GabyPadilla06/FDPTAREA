#include <iostream>

using namespace std;

int main() {

    int N;

    cout << "Ingresa la altura que quieres que tenga tu triangulo: ";
    cin >> N;

    for (int i = 1; i <= N; i++) {
        // En cada línea imprimimos 'i' asteriscos
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;  // Salto de línea después de cada fila
    }

    return 0;
}
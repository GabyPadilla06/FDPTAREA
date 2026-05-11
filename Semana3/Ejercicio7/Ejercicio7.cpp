#include <iostream>

using namespace std;

int main(){
    
    int numero;

    cout << "Ingresa un numero para iniciar la cuenta regresiva: " << endl;
    cin >> numero;

    while (numero >= 0)
    {
        cout << "Cuenta regresiva en: " << numero << endl;
        numero--; // Incrementa el contador
    }
    
    
    return 0;
}
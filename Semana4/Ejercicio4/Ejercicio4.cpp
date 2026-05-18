#include <iostream>

using namespace std;

int main(){

    int numero, mutiplicacion;

    cout << "Ingresa un numero: ";
    cin >> numero;

    for(int i = 1; i <= 10; i++){
        mutiplicacion = numero * i;
        cout << numero << " x " << i << " = " << mutiplicacion << endl;
    }

    return 0;
}
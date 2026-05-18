#include <iostream>

using namespace std;

int main(){

    int exponente;
    double numeroBase, potencia = 1.0;

    cout << "Ingresa un numero base: ";
    cin >> numeroBase;

    cout << "Ingresa un numero como exponente: ";
    cin >> exponente;

    for(int i = 0; i < exponente; i++){
        potencia = potencia * numeroBase;
    }

    cout << numeroBase << " elevado a la " << exponente << " es: " << potencia << endl; 

    return 0;
}
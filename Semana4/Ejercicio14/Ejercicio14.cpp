#include <iostream>

using namespace std;

int main(){

    int numero, numeroInvertido = 0;

    cout << "Ingresa un numero de al menos dos cifras: ";
    cin >> numero;

    for(int i = numero; i != 0; i /= 10 /*Elimina el último digito del numero temporal (i)*/){
        int digito = i % 10; // Extreamos el último digito del número
        numeroInvertido = numeroInvertido * 10 + digito; // Agrega el digito extraido a la variable del numeroInvertido
    }

    cout << "El numero invertido es: " << numeroInvertido << endl; 
    
    return 0;
}
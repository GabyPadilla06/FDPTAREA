#include <iostream>

using namespace std;

int main(){
    int num1, num2;

    cout << "Bienvenido a la calculadora de comparacion de numeros" << endl;
    cout << "Ingresa el primer numero" << endl;
    cin >> num1;

    cout << "Ingresa el segundo numero" << endl;
    cin >> num2;

    if(num1 > num2){
        cout << num1 << " es mayor que " << num2 << endl;
    }else if(num1 < num2){
        cout << num1 << " es menor que " << num2 << endl;
    }else if(num1 == num2){
        cout << num1 << " es igual que " << num2 << endl;
    }else{
        cout << "Ingresa un numero valido" << endl;
    }

    return 0;
}
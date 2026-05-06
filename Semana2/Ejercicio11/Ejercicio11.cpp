#include <iostream>
#include <cmath>

using namespace std;

int main(){

    int num1, num2;
    int opcion;
    double suma, resta, multiplicacion, division, divisionResiduo, potencia;

    cout << "====== Bienvenido a la calculadora avanzada ======" << endl;
    cout << "Ingresa un numero: " << endl;
    cin >> num1;

    if(num1 < 0){
        cout << "Solo aceptamos numeros positivos :)" << endl;
        return 1;
    }

    cout << "Ingresa otro numero: " << endl;
    cin >> num2;

    if(num2 < 0){
        cout << "Solo aceptamos numeros positivos :)" << endl;
        return 1;
    }

    cout << "Que operacion deseas realizar:" << endl;
    cout << "-----------Menu-----------" << endl;
    cout << "| 1. Suma                 |" << endl;
    cout << "| 2. Resta                |" << endl;
    cout << "| 3. Multiplicacion       |" << endl;
    cout << "| 4. Division             |" << endl;
    cout << "| 5. Division con residuo |" << endl;
    cout << "| 6. Elevar a potencia    |" << endl;
    cout << "--------------------------" << endl;
    cout << "Opcion: ";
    cin >> opcion;

    if(opcion <= 0 || opcion > 6){
        cout << "Ingresa una opcion dentro del rango de opciones" << endl;
    }

    switch (opcion)
    {
    case 1:
        suma = num1 + num2;
        cout << "Tu resultado es: " << suma << endl;
        break;
    case 2:
        resta = num1 - num2;
        cout << "Tu resultado es: " << resta << endl;
        break;
    case 3:
        multiplicacion = num1 * num2;
        cout << "Tu resultado es: " << multiplicacion << " libras" << endl;
        break;
    case 4:
        division = num1 / num2;
        cout << "Tu resultado es: " << division << endl;
        break;
    case 5:
        divisionResiduo = num1 % num2;
        cout << "Tu residuo es: " << divisionResiduo << endl;
        break;
    case 6:
        potencia = pow(num1, num2);
        cout << "Tu resultado es: " << potencia << endl;
        break;
    default:
        cout << "Datos invalidos";
        break;
    }

    return 0;
}
#include <iostream>

using namespace std;

int main(){

    double lado1, lado2, lado3;

    cout << "Ingresa el primer lado de tu triangulo: " << endl;
    cin >> lado1;

    cout << "Ingresa el segundo lado de tu triangulo: " << endl;
    cin >> lado2;

    cout << "Ingresa el tercer lado de tu triangulo: " << endl;
    cin >> lado3;

    if (lado1 <= 0 || lado2 <= 0 || lado3 <= 0) {
        cout << "Los lados deben ser positivos" << endl;
        return 1;
    }

    int triangulo = (lado1 == lado2) + (lado2 == lado3) + (lado1 == lado3);

    switch (triangulo)
    {
    case 3:
        cout << "El triangulo es equilatero (los tres lados son iguales)";
        break;
    case 1:
        cout << "El triangulo es isosceles (solo dos lados son iguales)";
        break;
    case 0:
        cout << "El triangulo es escaleno (todos los lados son diferentes)";
        break;
    default:
        cout << "Ingresa un numero valido";
        break;
    }

    return 0;
}
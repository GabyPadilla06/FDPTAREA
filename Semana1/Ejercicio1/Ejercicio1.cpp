#include <iostream>

using namespace std;

int main(){

    int edad;

    cout << "Bienvenido al programa de calculo de edad" << endl;
    cout << "Por favor, ingresa tu edad: " << endl;
    cin >> edad;

    if(edad >= 18){
        cout << "Perfecto, eres mayor de edad" << endl;
    }else{
        cout << "Ojo, parece que eres menor de edad" << endl;
    }

    return 0;
}
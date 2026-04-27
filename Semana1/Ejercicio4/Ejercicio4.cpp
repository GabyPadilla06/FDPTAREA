#include <iostream>

using namespace std;

int main(){

    float calificacion;

    cout << "Bienvenido a la calculadora de calificaciones" << endl;
    cout << "Por favor, ingresa tu nota: " << endl;
    cin >> calificacion;

    if(calificacion >= 6.0){
        cout << "Felicidades, aprobaste" << endl;
    }else{
        cout << "Lo siento, reprobaste" << endl;
    }

    return 0;
}
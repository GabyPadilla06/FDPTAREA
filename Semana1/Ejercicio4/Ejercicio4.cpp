#include <iostream>

using namespace std;

int main(){

    float calificacion;

    cout << "Bienvenido a la calculadora de calificaciones" << endl;
    cout << "Por favor, ingresa tu nota: " << endl;
    cin >> calificacion;

    if(calificacion >= 6.0){
        cout << "Felicidades, aprobaste" << endl;
    }else if(calificacion < 6.0 && calificacion >= 0){
        cout << "Lo siento, reprobaste" << endl;
    }else{
        cout << "Ingresa una calificacion valida" << endl;
    }

    return 0;
}
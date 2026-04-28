#include <iostream>

using namespace std;

int main(){

    float consumo;

    cout << "Bienvenido a la calculadora de tarifas" << endl;
    cout << "INgresa tu consumo de energia: " << endl;
    cin >> consumo;

    if(consumo < 100.0){
        cout << "La tarifa es baja" << endl;
    }else if(consumo >= 100.0 && consumo <= 200.0){
        cout << "La tarifa es media" << endl;
    }else{
        cout << "La tarifa es alta" << endl;
    }

    return 0;
}
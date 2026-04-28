#include <iostream>

using namespace std;

int main(){

    float velocidad;

    cout << "Bienvenido al programa verificador de multas" << endl;
    cout << "Ingresa la velocidad del conductor: " << endl;
    cin >> velocidad;
    
    if(velocidad > 60.0 && velocidad <= 80.0 ){
        cout << "Al conductor se le debe aplicar una multa de $100" << endl;
    }else if(velocidad > 80.0){
        cout << "Al conductor se le debe aplicar una multa de $200" << endl;
    }else{
        cout << "Al conductor no se le aplica una multa" << endl;
    }

    return 0;
}
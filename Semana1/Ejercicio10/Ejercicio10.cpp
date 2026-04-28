#include <iostream>

using namespace std;

int main(){

    float pesoPaquete;

    cout << "Bienvenido al programa de paqueteria" << endl;
    cout << "Ingresa el peso de tu paquete en kg: " << endl;
    cin >> pesoPaquete;

    if(pesoPaquete <= 5.0){
        cout << "El costo total de tu paquete es de $5" << endl;
    }else if(pesoPaquete >= 6.0 && pesoPaquete <= 10.0){
        cout << "El costo total de tu paquete es de $10" << endl;
    }else{
        cout << "El costo total de tu paquete es de $15" << endl;
    }
    
    return 0;
}
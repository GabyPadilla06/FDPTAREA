#include <iostream>

using namespace std;

int main(){

    int edad;

    cout << "Bienvenido al programa del parque de diversiones" << endl;
    cout << "Ingrese la edad del visitante: " << endl;
    cin >> edad;

    if(edad < 5){
        cout << "La entrada del visitante es gratis" << endl;
    }else if(edad >= 5 && edad <= 12){
        cout << "La entrada del visitante costaria $5" << endl;
    }else{
        cout << "La entrada del visitante costaria $10" << endl;
    }

    return 0;
}
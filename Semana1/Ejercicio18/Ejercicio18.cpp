#include <iostream>

using namespace std;

int main(){

    string contrasena, verificacionContrasena;

    cout << "Bienvenido a la etapa de creación de passwords" << endl;
    cout << "Ingresa tu nueva password: " << endl;
    cin >> contrasena;

    cout << "Ingresa nuevamente tu password: " << endl;
    cin >> verificacionContrasena;

    if(contrasena == verificacionContrasena){
        cout << "Password creada exitosamente" << endl;
    }else{
        cout << "Lo siento, parece que tus passwords no coinciden" << endl;
    }

    return 0;
}
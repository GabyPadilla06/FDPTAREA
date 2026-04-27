#include <iostream>

using namespace std;

int main(){

    string usuario;
    string contrasena;

    string usuarioPredeterminado = "Diana";
    string contrasenaPredeterminada = "Diana#2006";

    cout << "Bienvenido, inicia sesion" << endl;;
    cout << "Por favor ingresa tu nombre de usuario: " << endl;
    cin >> usuario;

    cout << "Por favor ingresa tu password: " << endl;
    cin >> contrasena;

    if(usuario != usuarioPredeterminado){
        cout << "Error, por favor revisa tu nombre de usuario" << endl;
    }else if(contrasena != contrasenaPredeterminada){
        cout << "Error, por favor revisa tu password" << endl;
    }else{
        cout << "Inicio de sesion existoso, bienvenid@ " << usuario << endl;
    }

    return 0;
}
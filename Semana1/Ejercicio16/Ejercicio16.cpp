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

    if(usuario == usuarioPredeterminado && contrasena == contrasenaPredeterminada){
        cout << "Inicio de sesion exitoso, bienvenid@ " << usuario << endl; 
    }else{
        cout << "Credenciales incorrectas. Te quedan 2 intentos" << endl;

        cout << "Por favor ingresa tu nombre de usuario: " << endl;
        cin >> usuario;
        cout << "Por favor ingresa tu password: " << endl;
        cin >> contrasena;

        if(usuario == usuarioPredeterminado && contrasena == contrasenaPredeterminada){
            cout << "Inicio de sesion exitoso, bienvenid@ " << usuario << endl;
        }else{
            cout << "Credenciales incorrectas. Te queda 1 intento" << endl;

            cout << "Por favor ingresa tu nombre de usuario: " << endl;
            cin >> usuario;
            cout << "Por favor ingresa tu password: " << endl;
            cin >> contrasena;

            if(usuario == usuarioPredeterminado && contrasena == contrasenaPredeterminada){
                cout << "Inicio de sesion exitoso, bienvenid@ " << usuario << endl;
            }else{
                cout << "Lo sentimos, pero fallaste todos tus intentos, prueba mas tarde" << endl;
            }
        }
    }

    return 0;
}

// Se pudo, pero a lo chabacan, no lo recomiendo
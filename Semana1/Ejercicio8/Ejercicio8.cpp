#include <iostream>

using namespace std;

int main()
{

    string usuario;
    string contrasena;

    string usuarioPredeterminado = "Diana";
    string contrasenaPredeterminada = "Diana#2006";

    cout << "Bienvenid@, inicia sesion" << endl;
    cout << "Por favor ingresa tu nombre de usuario: " << endl;
    cin >> usuario;

    cout << "Por favor ingresa tu password: " << endl;
    cin >> contrasena;

    if (usuario == usuarioPredeterminado && contrasena == contrasenaPredeterminada)
    {
        cout << "Inicio de sesion exitoso, bienvenid@ " << usuario << endl;
    }
    else
    {
        cout << "Error, usuario o contrasena incorrectos." << endl;
    }

    return 0;
}
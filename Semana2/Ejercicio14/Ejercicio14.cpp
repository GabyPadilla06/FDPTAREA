#include <iostream>

using namespace std;

int main(){

    int edad;

    cout << "Ingresa tu edad: " << endl;
    cin >> edad;

    int categoria;
    if(edad < 0){
        cout << "Ingresa una edad valida";
        return 1;
    }else if(edad < 6){
        categoria = 0;
    }else if(edad < 13){
        categoria = 1;
    }else if(edad < 17 ){
        categoria = 2;
    }else{
        categoria = 3;
    }

    switch (categoria)
    {
    case 0:
        cout << "Clasificacion G (General)";
        break;
    case 1:
        cout << "Clasificacion PG (Guia parental)";
        break;
    case 2:
        cout << "Clasificacion PG-13 (Mayores de 13)";
        break;
    case 3:
        cout << "Clasificacion R (Restringido, +17)";
        break;
    }

    return 0;
}
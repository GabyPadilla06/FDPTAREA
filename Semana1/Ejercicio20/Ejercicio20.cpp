#include <iostream>

using namespace std;

int main(){

    int edad, infracciones, experiencia;

    cout << "Bienvenido al sistema de calificacion de conduccion" << endl;
    cout << "Ingresa tu edad: " << endl;
    cin >> edad;

    cout << "Ingresa tu numero de infracciones: " << endl;
    cin >> infracciones;

    cout << "Ingresa tu experiencia: " << endl;
    cin >> experiencia;

    if(edad < 18){
        cout << "Lo siento, no puedes manejar aun ya que eres menor de edad" << endl;
    }else if(edad >= 18 && experiencia < 1){
        cout << "Lo siento, no tienes suficiente experiencia" << endl;
    }else if(infracciones >= 5){
        cout << "Lo siento, tienes demasiadas infracciones" << endl;
    }else if(infracciones >= 3 && experiencia < 3){
        cout << "Tienes pocas infracciones pero poca experiencia" << endl;
    }else if(infracciones >= 3 && experiencia >= 3){
        cout << "Lo siento, tienes demasiadas infracciones registradas" << endl;
    }else if(infracciones < 3 && experiencia >= 5){
        cout << "Excelente, eres un conductor experimentado y responsable" << endl;
    }else{
        cout << "Buen conductor" << endl;
    }

    return 0;
}
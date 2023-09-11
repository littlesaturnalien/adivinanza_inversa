#include <iostream>
using namespace std;

int main() {
    char answer;
    int lowerNum = 1, maxNum = 100;
    int num;
    
    cout << "Piensa en un numero del 1 al 100. Voy a intentar adivinarlo en 5 preguntas." << endl;

    for (int attempts = 0; attempts < 6; attempts++) {
        num = (lowerNum + maxNum) / 2;
        cout <<  "Intento #" << attempts + 1 << ": " << num <<  endl;
        cout << endl;
        cout << "Este es el numero que has pensado? Escribe = si es correcto, < si tu numero es menor o > si tu numero es mayor." << endl;
        cout << " ---> ";
        cin >> answer;

        if (answer == '=') {
            cout << "Adivine!!! Gracias por dejarme jugar!" << endl;
            break;
        } else if (answer == '>') {
            lowerNum = num + 1;
        } else if (answer == '<') {
            maxNum = num - 1;
        } else {
            cout << "Respuesta no valida. Por favor, responde '=', '<' o '>'." << endl;
        }

        if (attempts == 5  && answer == '<') {
            cout << "Tu numero era: " << num - 1  << endl;
        } else if(attempts == 5 && answer == '>'){
            cout << "Tu numero era: " << num + 1 << endl;
        }
    }

   return 0;
}
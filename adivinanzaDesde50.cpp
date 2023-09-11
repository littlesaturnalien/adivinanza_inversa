#include <iostream>
#include <string.h>
 
using namespace std;
 
int main() {
    char answer[1];
    int num = 50;
    int maxNum = 100, lowerNum = 1, attempts = 0;
    bool correct = false;


    do{
        cout << "Intento #" << attempts + 1 << ": " << num << endl;
        cout << endl;
        cout << "Este es el numero que has pensado? Escribe = si es correcto, < si tu numero es menor o > si tu numero es mayor." << endl;
        cout << " ---> ";
        cin >> answer;

        if (strcmp(answer, "=") == 0){
            correct = true;
        }
        else if (strcmp(answer, "<") == 0){
            maxNum = num - 1;
            num = (maxNum + lowerNum)/2;
            attempts++;
        }
        else if(strcmp(answer, ">") == 0){
            lowerNum = num + 1;
            num = (maxNum + lowerNum)/2;
            attempts++;
        }
        else {
            cout << "Respuesta no valida. Por favor, responde '=', '<' o '>'." << endl;
        }

    } while (correct == false && attempts < 6);

     if(correct == false){
        cout << endl;
        cout << " He perdido :(" << endl;
        cout << "Tu numero era: " << num;
    } else{
        cout << endl;
        cout << " Adivine!!! Gracias por dejarme jugar!" << endl;
    }

    return 0;
}
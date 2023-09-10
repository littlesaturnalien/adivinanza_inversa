#include <iostream>
#include <string.h>
 
using namespace std;
 
int main() {
    char answer[1];
    int num = 50;
    int maxNum = 100, lowerNum = 1, intentos = 0;
    bool correct = false;


    do{
        cout << "Intento #" << intentos + 1 << ": " << num << endl;
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
            intentos++;
        }
        else if(strcmp(answer, ">") == 0){
            lowerNum = num + 1;
            num = (maxNum + lowerNum)/2;
            intentos++;
        }

    } while (correct == false && intentos < 6);

     if(correct == false){
        cout << endl;
        printf(" He perdido :(\n");
    } else{
        cout << endl;
        printf(" Adivine!!! Gracias por dejarme jugar contigo! \n");
    }

    return 0;
}
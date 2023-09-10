#include <iostream>
#include <string.h>
#include <cstdlib>  // srand(), rand()
#include <ctime>    // time()
 
using namespace std;
 
int main() {
    char answer[1];
    int num;
    int maxNum = 100, lowerNum = 1, intentos = 0;
    bool correct = false;
    srand(time(NULL));
    for (int i = 0; i < 1; i++){
        num = lowerNum + rand() % (maxNum + 1 - lowerNum);
    }


    do{
        cout << "Intento #" << intentos + 1 << ": " << num << endl;
        cout << endl;
        cout << "Este es el numero que has pensado? Escribe = si es exacto, < si es menor o > si es mayor." << endl;
        cout << " ---> ";
        cin >> answer;

        if (strcmp(answer, "=") == 0){
            correct = true;
        }
        else if (strcmp(answer, "<") == 0){
            maxNum = num - 1;
            num = lowerNum + rand() % (maxNum + 1 - lowerNum);
            intentos++;
        }
        else if(strcmp(answer, ">") == 0){
            lowerNum = num + 1;
            num = lowerNum + rand() % (maxNum + 1 - lowerNum);
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
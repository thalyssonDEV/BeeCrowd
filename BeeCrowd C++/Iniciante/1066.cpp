#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int i = 0;
    int x;
    int pares = 0;
    int impares = 0;
    int positives = 0;
    int negatives = 0;

    while (i < 5){
        i++;
        cin >> x;

        if (x % 2 == 0){
            pares++;
        }
        if (x % 2 != 0){
            impares++;
        }
        if (x > 0){
            positives++;
        }
        if (x < 0){
            negatives++;
        }
    }
    cout << pares << " valor(es) par(es)\n";
    cout << impares << " valor(es) impar(es)\n";
    cout << positives << " valor(es) positivo(s)\n";
    cout << negatives << " valor(es) negativo(s)\n";
    return 0;
}

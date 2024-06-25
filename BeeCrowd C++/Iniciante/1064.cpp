#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double numero,pares = 0,soma = 0;

    for(int i=0 ; i<6 ; i++){
        cin >> numero;
        if (numero > 0){
            pares++;
            soma += numero;
        }
    }
    double media_final = soma / pares;
    cout << pares << " valores positivos" << endl;
    cout << fixed << setprecision(1);
    cout << media_final << endl;

    return 0;
}

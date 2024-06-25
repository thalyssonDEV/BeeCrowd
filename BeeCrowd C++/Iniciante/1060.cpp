#include <iostream>
using namespace std;

int main(){
    double numeros;
    int pares = 0;
    
    for(int i = 0; i < 6; i++){
        cin >> numeros;
        if (numeros > 0){
            pares++;
        }
    }
    
    cout << pares << " valores positivos" << endl;
    return 0;
}

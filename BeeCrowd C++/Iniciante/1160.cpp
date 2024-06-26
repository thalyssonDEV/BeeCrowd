#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int PA,PB,casos_teste;
    float G1,G2;
   
    cin >> casos_teste;
    for(int i = 0 ; i < casos_teste ; i++){
        cin >> PA >> PB >> G1 >> G2;
       
        int anos = 0;
        while(PA <= PB){
            if (anos > 100){
                break;
            }
           
            float aumento_a = PA * (G1/100);
            PA += floor(aumento_a);
            float aumento_b = PB * (G2/100);
            PB += floor(aumento_b);
            anos++;
        }
        if (anos <= 100){
            cout << anos << " anos." << endl;
        }else{
            cout << "Mais de 1 seculo." << endl;
        }
    }
    return 0;
}

#include <iostream>
#include <iomanip>
using namespace std;


int main(){
    float consumo,qtd_habitantes;
    float media;
    
    cin >> consumo >> qtd_habitantes;
    
    media = consumo / qtd_habitantes;
    
    cout << fixed << setprecision(2) << media << endl;
    
    return 0;
}

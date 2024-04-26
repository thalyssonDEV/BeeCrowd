#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int cod,qtd;
    float valor = 0;
    
    cin >> cod >> qtd;
    
    cout << fixed << setprecision(2);
    
    if (cod == 1){
        valor = 4. * qtd;
    }if (cod == 2){
        valor = 4.5 * qtd;
    }if (cod == 3){
        valor = 5 * qtd;
    }if (cod == 4){
        valor = 2 * qtd;
    }if (cod == 5){
        valor = 1.5 * qtd;
    }
    cout << "Total: R$ " << valor << endl;
    return 0;
}

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int numero1,numero2,codigo1,codigo2;
    double valor1,valor2;

    cin >> codigo1 >> numero1 >> valor1;
    cin >> codigo2 >> numero2 >> valor2;

    cout << fixed << setprecision(2);

    double valor_pagar = (numero1*valor1)+(numero2*valor2);

    cout << "VALOR A PAGAR: R$ " << valor_pagar << endl;
    return 0;
}
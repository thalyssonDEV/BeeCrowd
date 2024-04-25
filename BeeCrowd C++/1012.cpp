#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main(){
    float A,B,C;
    
    cin >> A >> B >> C;
    
    cout << fixed << setprecision(3);
    
    float atr = (A * C) / 2;
    float ac = 3.14159 * pow(C,2);
    float at = ((A+B)*C)/2;
    float aq = pow(B,2);
    float ar = A * B;
    
    cout << "TRIANGULO: " << atr;
    cout << "\nCIRCULO: " << ac;
    cout << "\nTRAPEZIO: " << at;
    cout << "\nQUADRADO: " << aq;
    cout << "\nRETANGULO: " << ar << endl;
    return 0;
}
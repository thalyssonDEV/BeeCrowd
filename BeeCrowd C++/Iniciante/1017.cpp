#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int hora,vm;

    cin >> hora;
    cin >> vm;

    float qtd_km = vm * hora;
    float qtd_l = qtd_km / 12;

    cout << fixed << setprecision(3);

    cout << qtd_l << endl;
    return 0;
}

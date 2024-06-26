#include <iostream>
using namespace std;

void conferir_combustivel(int opcoes, int &alcool, int &gasolina, int &diesel) {
    if (opcoes == 1) {
        alcool += 1;
    } else if (opcoes == 2) {
        gasolina += 1;
    } else if (opcoes == 3) {
        diesel += 1;
    }
}

int main() {
    int opcoes;
    int alcool = 0;
    int gasolina = 0;
    int diesel = 0;

    while (true) {
        cin >> opcoes;

        if (opcoes == 4) {
            break;
        } else if (opcoes == 1 || opcoes == 2 || opcoes == 3) {
            conferir_combustivel(opcoes, alcool, gasolina, diesel);
        }
    }
  
    cout << "MUITO OBRIGADO" << endl;
    cout << "Alcool: " << alcool << endl;
    cout << "Gasolina: " << gasolina << endl;
    cout << "Diesel: " << diesel << endl;

    return 0;
}

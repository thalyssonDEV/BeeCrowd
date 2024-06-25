#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    float salario,reajuste,novo_salario;
    string p_reajuste;

    cin >> salario;

    if (salario <= 400){
        reajuste = salario*0.15;
        p_reajuste = "15 %"; 

    }else if (salario <= 800){
        reajuste = salario*0.12;
        p_reajuste = "12 %";

    }else if (salario <= 1200){
        reajuste = salario*0.1;
        p_reajuste = "10 %";

    }else if (salario <= 2000){
        reajuste = salario*0.07;
        p_reajuste = "7 %";

    }else{
        reajuste = salario*0.04;
        p_reajuste = "4 %";
    }

    cout << fixed << setprecision(2);
    novo_salario = salario + reajuste;

    cout << "Novo salario: " << novo_salario << endl;
    cout << "Reajuste ganho: " << reajuste << endl;
    cout << "Em percentual: " << p_reajuste << endl;

    return 0;
}

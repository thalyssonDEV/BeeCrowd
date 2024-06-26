#include <iostream>
#include <iomanip>
using namespace std;

float calcular_valor(int produto, int qtd_unidades){
    float preco_unidade;
    float preco;
    
    if (produto == 1001){
        preco_unidade = 1.5;
    }else if (produto == 1002){
        preco_unidade = 2.5;
    }else if (produto == 1003){
        preco_unidade = 3.5;
    }else if (produto == 1004){
        preco_unidade = 4.5;
    }else if (produto == 1005){
        preco_unidade = 5.5;
    }
    preco = (preco_unidade * qtd_unidades);
    return preco;
}

int main(){
    int produto,qtd_produtos,qtd_unidades;
    float preco_final = 0;
    
    cin >> qtd_produtos;
    
    for(int i = 0; i < qtd_produtos; i++){
        cin >> produto >> qtd_unidades;
        preco_final += calcular_valor(produto,qtd_unidades);
    }
    cout << fixed << setprecision(2) << preco_final << endl;
    return 0;
}

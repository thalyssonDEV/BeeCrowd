#include <iostream>
using namespace std;

int main(void){
  int abas,numero_acoes,abas_iniciais;
  string acao;
  
  cin >> abas_iniciais >> numero_acoes;
  abas = abas_iniciais;

  for (int i = 0; i < numero_acoes; i++){
    cin >> acao;

    if (acao == "clicou"){
      abas--;
    }else if (acao == "fechou"){
      abas++;
    }
  }

  cout << abas << endl;
  return 0;
}

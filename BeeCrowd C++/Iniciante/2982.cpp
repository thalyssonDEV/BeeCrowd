#include <iostream>
using namespace std;

int main(){
  int qtd_valores,valor,verba,gasto;
  string ocorrencia;

  cin >> qtd_valores;
  
  verba = 0;
  gasto = 0;
  for(int i = 0 ; i < qtd_valores ; i++){
    cin >> ocorrencia >> valor;

    if(ocorrencia == "V"){
      verba += valor;
    }else if(ocorrencia == "G"){
      gasto += valor;
    }
  }
  if(verba > gasto){
    cout << "A greve vai parar." << endl;
  }else{
    cout << "NAO VAI TER CORTE, VAI TER LUTA!" << endl;
  }
  return 0;
}

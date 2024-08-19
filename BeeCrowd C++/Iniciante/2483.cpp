#include <iostream>
using namespace std;

string retornar_quantidade_letras(int qtd_a){
  string somatorio_a = "";
  
  for(int i = 0; i < qtd_a; i++){
    somatorio_a += "a";
  }
  return somatorio_a;
}

int main(){
  int qtd_a;
  string resultado_a;

  cin >> qtd_a;

  resultado_a = retornar_quantidade_letras(qtd_a);

  cout << "Feliz nat" << resultado_a << "l!" << endl;
  
  return 0;
}

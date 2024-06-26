#include <iostream>
#include <iomanip>
using namespace std;

int main(){
  int idade;

  idade = 0;
  int soma_idades = 0;
  int qtd_idades_inseridas = 0;
  while (idade >= 0){
    cin >> idade;
    if (idade < 0){
      break;
    }
    soma_idades += idade;
    qtd_idades_inseridas++;
  }
  float media = float(soma_idades) / float(qtd_idades_inseridas);
  cout << fixed << setprecision(2) << media << endl;
  return 0;
}

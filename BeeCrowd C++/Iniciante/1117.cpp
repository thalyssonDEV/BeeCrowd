#include <iostream>
#include <iomanip>
using namespace std;

int main(){
  float soma_notas,qtd_notas,nota;

  nota = -1;
  qtd_notas = 0;
  soma_notas = 0;
  while (qtd_notas < 2){
    cin >> nota;

    if (nota > 0 && nota <= 10){
      qtd_notas++;
      soma_notas += nota;
    }else{
      cout << "nota invalida" << endl;
    }
  }
  float media = soma_notas / 2;
  cout << fixed << setprecision(2) << "media = " << media << endl;
  return 0;
}

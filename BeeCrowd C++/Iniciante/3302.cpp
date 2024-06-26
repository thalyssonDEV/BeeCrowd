#include <iostream>
using namespace std;

int main(void){
  int casos_teste,respostas;

  cin >> casos_teste;

  int contador_respostas = 1;
  for (int i = 0; i < casos_teste; i++){
    cin >> respostas;

    cout << "resposta " << contador_respostas << ": " << respostas << endl;
    contador_respostas++;
  }
  return 0;
}

#include <iostream>
using namespace std;

int main(){
  int casos_teste,pontuacao,distancia;

  cin >> casos_teste;

  for(int i = 0 ; i < casos_teste ; i++){
    int pontos_joao = 0;
    int pontos_maria = 0;
    
    for(int j = 0 ; j < 3 ; j++){
      cin >> pontuacao >> distancia;
      pontos_joao += (pontuacao * distancia);
    }
    for(int z = 0 ; z < 3 ; z++){
      cin >> pontuacao >> distancia;
      pontos_maria += (pontuacao * distancia);
    }
    if(pontos_joao > pontos_maria){
      cout << "JOAO" << endl;
    }else{
      cout << "MARIA" << endl;
    }
  }
  return 0;
}

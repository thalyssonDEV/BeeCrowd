#include <iostream>
using namespace std;

int main(){
  int tempo_restante,tempo_presente_1,tempo_presente_2;

  cin >> tempo_restante;
  cin >> tempo_presente_1 >> tempo_presente_2;

  int soma_tempos = tempo_presente_1 + tempo_presente_2;

  if(soma_tempos > tempo_restante){
    cout << "Deixa para amanha!" << endl;
  }else{
    cout << "Farei hoje!" << endl;
  }
  
  return 0;
}

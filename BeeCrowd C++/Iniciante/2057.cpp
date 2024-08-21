#include <iostream>
using namespace std;

int main() {
  int hora_saida, tempo_viagem, fuso_horario, horario_chegada, horario_chegada_fuso;

  cin >> hora_saida >> tempo_viagem >> fuso_horario;

  horario_chegada = hora_saida + tempo_viagem;
  if (horario_chegada >= 23) {
    horario_chegada -= 24;
  }

  horario_chegada_fuso = horario_chegada + fuso_horario;
  if (horario_chegada_fuso <= 0) {
    horario_chegada_fuso += 24;
  }
  
  if (horario_chegada_fuso == 24) {
    horario_chegada_fuso = 0;
  }
  cout << horario_chegada_fuso << endl;

  return 0;
}

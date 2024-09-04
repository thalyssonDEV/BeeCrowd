#include <iostream>

int main() {
  int intervalos, tempoHoras, velocidadeMedia, distancia, distanciaTotalPercorrida{};

  std::cin >> intervalos;

  for (int i{}; i < intervalos; i++) {

    std::cin >> tempoHoras >> velocidadeMedia;
    
    distancia = tempoHoras * velocidadeMedia;
    distanciaTotalPercorrida += distancia;
  }
  std::cout << distanciaTotalPercorrida << "\n";

  return 0;
}

#include <iostream>

int main() {
  int numero,contador;

  std::cin >> numero;

  contador = 0;
  while (true) {
    if (numero % 2 != 0) {
      std::cout << numero << "\n";
      contador++;
    }
    numero++;
    
    if (contador == 6){
      break;
    }
  }
  return 0;
}

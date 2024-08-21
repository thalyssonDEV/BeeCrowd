#include <iostream>

int main() {
  int casos_teste, r1, r2, resultado;

  std::cin >> casos_teste;

  for (int i{}; i < casos_teste; i++) {
    std::cin >> r1 >> r2;

    resultado = r1 + r2;

    std::cout << resultado << "\n";
  }
  return 0;
}

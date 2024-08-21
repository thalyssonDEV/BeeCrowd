#include <iostream>

int get_points(int distancia) {
  if (distancia <= 800) {
    return 1;
  } else if (distancia <= 1400) {
    return 2;
  } else {
    return 3;
  }
}

int main() {
  int distancia, resultado;

  std::cin >> distancia;

  resultado = get_points(distancia);

  std::cout << resultado << "\n";

  return 0;
}

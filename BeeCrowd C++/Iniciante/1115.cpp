#include <algorithm>
#include <iostream>
#include <string>

std::string _get_quadrant(int x, int y) {

  if (x > 0 && y > 0) {
    return "primeiro";
  } else if (x < 0 && y > 0) {
    return "segundo";
  } else if (x < 0 && y < 0) {
    return "terceiro";
  } else {
    return "quarto";
  }
}

int main() {
  int x, y;
  std::string quadrante;

  while (true) {
    std::cin >> x >> y;

    if (x == 0 || y == 0) {
      break;
    }
    quadrante = _get_quadrant(x,y);

    std::cout << quadrante << "\n";
  }
  return 0;
}

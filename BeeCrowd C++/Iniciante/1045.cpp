#include <algorithm>
#include <iostream>

int main() {
  float num_1, num_2, num_3;
  float a, b, c;

  std::cin >> num_1 >> num_2 >> num_3;

  c = std::min({num_1, num_2, num_3});
  a = std::max({num_1, num_2, num_3});
  b = num_1 + num_2 + num_3 - c - a;

  if (a >= b + c) {
    std::cout << "NAO FORMA TRIANGULO" << "\n";

  } else {

    if ((a * a) == ((b * b) + (c * c))) {
      std::cout << "TRIANGULO RETANGULO" << "\n";
    } if ((a * a) > ((b * b) + (c * c))) {
      std::cout << "TRIANGULO OBTUSANGULO" << "\n";
    } if ((a * a) < ((b * b) + (c * c))) {
      std::cout << "TRIANGULO ACUTANGULO" << "\n";
    } if (a == b && a == c) {
      std::cout << "TRIANGULO EQUILATERO" << "\n";
    } else if (a == b || a == c || c == b) {
      std::cout << "TRIANGULO ISOSCELES" << "\n";
    }
  }
  return 0;
}

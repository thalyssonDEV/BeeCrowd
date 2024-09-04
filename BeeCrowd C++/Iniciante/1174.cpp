#include <iostream>
#include <iomanip>

int main() {
  int index{};
  float valor;

  for (int i{}; i < 100; i++) {

    std::cin >> valor;
    
    if (valor <= 10) {
      std::cout << "A[" << index << "] = " << std::setprecision(1) << std::fixed << valor << "\n";
    }
    index++;
  }
  return 0;
}

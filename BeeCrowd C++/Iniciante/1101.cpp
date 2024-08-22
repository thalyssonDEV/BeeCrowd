#include <iostream>
#include <algorithm>

int main() {
  int a,b,menor,maior,soma;

  while (true){
    std::cin >> a >> b;

    if (a <= 0 || b <= 0) {
      break;
    }
  
    menor = std::min(a,b);
    maior = std::max(a,b);
  
    soma = 0;
    for (int numeros = menor; numeros <= maior; numeros++) {
      soma += numeros;
      std::cout << numeros << " ";
    }
    std::cout << "Sum=" << soma << "\n";
  }
  return 0;
}

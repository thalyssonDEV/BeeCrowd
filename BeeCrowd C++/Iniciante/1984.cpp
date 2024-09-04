#include <iostream>

int main() {
  long numero;
  std::string numeroStr, numeroInvertido = "";

  std::cin >> numero;
  numeroStr = std::to_string(numero);  

  for (char chr : numeroStr) {
    numeroInvertido = chr + numeroInvertido;
  }  
  std::cout << numeroInvertido << "\n";
  
  return 0;
}

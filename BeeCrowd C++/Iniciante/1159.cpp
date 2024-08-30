#include <iostream>

int main() {
   int X, qtd_pares, soma;
  
   while (true){
       std::cin >> X;
       
       if (X == 0){
           break;
       }
       
       qtd_pares = 0;
       soma = 0;
       while (qtd_pares < 5){
          
          if (X % 2 == 0){
            soma += X;
            qtd_pares++;
          }
          X++;
       }
       std::cout << soma << "\n";
   }
    return 0;
}

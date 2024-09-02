#include <iostream>

int main() {
    int casosTeste, valor, result;
    
    std::cin >> casosTeste;
    
    for (int i{}; i < casosTeste; i++) {
        
        std::cin >> valor;
        
        result = 1;
        for (int x = 1; x < valor; x++) {
            
            if (x % 2 != 0) {
                result--;
            } else {
                result++;
            }
        }
    std::cout << result << "\n";
     
    }
    return 0;
}

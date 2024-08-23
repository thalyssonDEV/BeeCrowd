#include <iostream>

int main() {
    int linhas_saida;
    
    std::cin >> linhas_saida;

    int base = 1;
    for (int i{}; i < linhas_saida; i++) {
        std::cout << base << " " << base + 1 << " " << base + 2 << " PUM" << "\n";
        base += 4;
    }
    return 0;
}

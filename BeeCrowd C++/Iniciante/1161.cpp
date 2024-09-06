#include <iostream>

unsigned long long fatorial(int n) {
    if (n == 0 || n == 1) return 1;
    
    unsigned long long resultado = 1;
    for (int i = 2; i <= n; ++i) {
        resultado *= i;
    }
    return resultado;
}

int main() {
    int fat1, fat2;

    while (std::cin >> fat1 >> fat2) {
        unsigned long long fatorial1 = fatorial(fat1);
        unsigned long long fatorial2 = fatorial(fat2);
        
        unsigned long long soma = fatorial1 + fatorial2;
        
        std::cout << soma << std::endl;
    }
    return 0;
}

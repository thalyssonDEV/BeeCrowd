#include <iostream>

int main() {
    int valor = 1;

    while (valor != 0) {
        std::cin >> valor;

        for (int i = 1; i <= valor; i++) {

            if (i != valor) {
                std::cout << i << " ";
            } else {
                std::cout << i << "\n";
            }
        }
    }
    return 0;
}

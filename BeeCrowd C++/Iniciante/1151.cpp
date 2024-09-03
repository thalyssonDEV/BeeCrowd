#include <iostream>

int main() {
    int valor1, valor2, resultadoTemporario, sequencia, primeiro;

    std::cin >> sequencia;

    valor1 = 1;
    valor2 = 0;
    primeiro = 1;
    for (int i{}; i < sequencia; i++) {

        resultadoTemporario = valor1 + valor2;
        valor1 = valor2;
        valor2 = resultadoTemporario;

        if (!primeiro) {
            std::cout << " ";
        }
        std::cout << valor1;

        primeiro = 0;
    }
    std::cout << "\n";

    return 0;
}

#include <iostream>
#include <iomanip>

int main() {
    int qtd_anoes, distancia;
    float distancia_final;

    std::cin >> qtd_anoes >> distancia;

    distancia_final = float(distancia) / (qtd_anoes + 2);

    std::cout << std::setprecision(2) << std::fixed << distancia_final << "\n";

    return 0;
}

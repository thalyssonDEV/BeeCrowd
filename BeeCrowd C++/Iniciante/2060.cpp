#include <iostream>
#include <vector>
#include <tuple>

std::tuple<int, int, int, int> getMultiples(const std::vector<int> &listaNumeros) {
    int multiplos2{}, multiplos3{}, multiplos4{}, multiplos5{};

    for (int valor : listaNumeros) {
        if (valor % 2 == 0) {
            multiplos2++;
        }
        if (valor % 3 == 0) {
            multiplos3++;
        }
        if (valor % 4 == 0) {
            multiplos4++;
        }
        if (valor % 5 == 0) {
            multiplos5++;
        }
    }
    return std::make_tuple(multiplos2, multiplos3, multiplos4, multiplos5);
}


int main() {
    int qtdNumeros, numeros;
    std::vector<int> listaNumeros;

    std::cin >> qtdNumeros;

    for (int i = 0; i < qtdNumeros; i++) {
        std::cin >> numeros;
        listaNumeros.push_back(numeros);
    }

    auto valores = getMultiples(listaNumeros);

    int multi2 = std::get<0>(valores);
    int multi3 = std::get<1>(valores);
    int multi4 = std::get<2>(valores);
    int multi5 = std::get<3>(valores);

    std::cout << multi2 << " Multiplo(s) de 2" << "\n";
    std::cout << multi3 << " Multiplo(s) de 3" << "\n";
    std::cout << multi4 << " Multiplo(s) de 4" << "\n";
    std::cout << multi5 << " Multiplo(s) de 5" << "\n";
    
    return 0;
}

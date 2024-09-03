#include <iostream>
#include <vector>
#include <tuple>

std::tuple<int, int, int, int> ass(const std::vector<int> &listaNumeros) {
    int multiplos2{}, multiplos3{}, multiplos4{}, multiplos5{};
    
    for (int valor : listaNumeros) {
        
        if (valor % 2 == 0 ) {
            multiplos2++;
        }
        else if (valor % 3 == 0) {
            multiplos3++;
        }
        else if (valor % 4 == 0) {
            multiplos4++;
        }
        else if (valor % 5 == 0) {
            multiplos5++;
        }
    }
    
    return std::make_tuple(multiplos2,multiplos3,multiplos4,multiplos5);
}

int main() {
    int qtd_numeros, numeros;
    std::vector<int>listaNumeros{};
    
    std::cin >> qtd_numeros;
    
    for (int i{}; i < qtd_numeros; i++) {
        
        std::cin >> numeros;
        listaNumeros.push_back(numeros);
    }
    
    std::tuple<int, int, int, int> valores = ass(listaNumeros);
    
    int multi2 = std::get<0>(valores);
    int multi3 = std::get<1>(valores);
    int multi4 = std::get<2>(listaNumeros);
    int multi5 = std::get<3>(listaNumeros);
    
    return 0;
}

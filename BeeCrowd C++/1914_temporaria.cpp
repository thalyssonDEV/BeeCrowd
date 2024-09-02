#include <iostream>
#include <string>

bool isPar(int soma) {
    return (soma % 2 == 0);
}


std::string getWinner(const std::string& nome1, const std::string& nome2, const std::string& escolha1, const std::string& escolha2, int numero1, int numero2) {
    int soma = numero1 + numero2;
    bool ehPar = isPar(soma);
    
    std::string resultado = ehPar ? "PAR" : "IMPAR";
    
    if (escolha1 == resultado) {
        return nome1;
    } else {
        return nome2;
    }
}


int main() {
    int casosTeste, numeroJogador1, numeroJogador2;
    std::string nomeJogador1, nomeJogador2, escolhaJogador1, escolhaJogador2;
    
    std::cin >> casosTeste;
    
    for (int i = 0; i < casosTeste; ++i) {
        std::cin >> nomeJogador1 >> escolhaJogador1 >> nomeJogador2 >> escolhaJogador2;
        std::cin >> numeroJogador1 >> numeroJogador2;
        
        std::string vencedor = getWinner(nomeJogador1, nomeJogador2, escolhaJogador1, escolhaJogador2, numeroJogador1, numeroJogador2);
        
        std::cout << vencedor << "\n";
    }
    return 0;
}

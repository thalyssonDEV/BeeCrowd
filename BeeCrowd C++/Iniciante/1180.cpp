#include <iostream>
#include <vector>
#include <tuple>

std::tuple<int,int> getSmallerAndPosition(const std::vector<int>& vetor){
  int menor = vetor[0], posicaoMenor{}, index{};

  for (int value : vetor) {

    if (value < menor) {
      menor = value;
      posicaoMenor = index;
    }
    index++;
  }
  return std::make_tuple(menor, posicaoMenor);
}


int main(){
  int valores, tamanho;
  std::vector<int> vetor{};

  std::cin >> tamanho;

  for (int i{}; i < tamanho; i++) {
    std::cin >> valores;
    vetor.push_back(valores);
  }

  std::tuple<int, int> values = getSmallerAndPosition(vetor);

  int menor = std::get<0>(values);
  int posicaoMenor = std::get<1>(values);

  std::cout << "Menor valor: " << menor << "\n";
  std::cout << "Posicao: " << posicaoMenor << "\n";

  return 0;
}

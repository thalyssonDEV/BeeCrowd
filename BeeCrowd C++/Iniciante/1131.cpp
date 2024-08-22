#include <iostream>
#include <string>

std::string _get_winner(int pontos_inter, int pontos_gremio) {
  if (pontos_inter > pontos_gremio) {
    return "Inter";
  } else if (pontos_gremio > pontos_inter) {
    return "Gremio";
  } else {
    return NULL;
  }
}

int main() {
  int gols_inter, gols_gremio, grenais, pontos_inter, pontos_gremio, empates, choice;
  std::string vencedor;

  grenais = 0;
  pontos_inter = 0;
  pontos_gremio = 0;
  empates = 0;
  while (true) {
    grenais++;
    
    std::cin >> gols_inter >> gols_gremio;

    if (gols_inter > gols_gremio) {
      pontos_inter++;
    } else if (gols_inter == gols_gremio) {
      empates++;
    } else {
      pontos_gremio++;
    }

    std::cout << "Novo grenal (1-sim 2-nao)" << "\n";
    std::cin >> choice;

    if (choice == 2) {
      break;
    }
  }
  vencedor = _get_winner(pontos_inter,pontos_gremio);
  
  std::cout << grenais << " grenais" << "\n";
  std::cout << "Inter:" << pontos_inter << "\n";
  std::cout << "Gremio:" << pontos_gremio << "\n";
  std::cout << "Empates:" << empates << "\n";

  if (vencedor == "Gremio" || vencedor == "Inter"){
    std::cout << vencedor << " venceu mais" << "\n";
  } else {
    std::cout << "Nao houve vencedor" << "\n";
  }
  return 0;
}

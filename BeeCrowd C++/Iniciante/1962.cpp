#include <iostream>

int main() {
    int casosTeste, anos, anoCorrespondente;

    std::cin >> casosTeste;

    for (int i = 0; i < casosTeste; ++i) {
        std::cin >> anos;

        anoCorrespondente = (2015 - anos);

        if (anoCorrespondente <= 0) {
            std::cout << -anoCorrespondente + 1 << " A.C." << "\n";
        } else {
            std::cout << anoCorrespondente << " D.C." << "\n";
        }
    }
  return 0;
}

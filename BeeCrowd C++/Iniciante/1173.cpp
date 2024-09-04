#include <iostream>

int main() {
    int valor;

    std::cin >> valor;

    for (int index{}; index < 10; index++) {

        std::cout << "N[" << index << "] = " << valor << "\n";
        valor *= 2;
    }
    return 0;
}

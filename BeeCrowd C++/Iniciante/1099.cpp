#include <iostream>
#include <algorithm>

int calculate_sum(int num_1, int num_2) {
    int sum{}, maior, menor;

    maior = std::max(num_1,num_2);
    menor = std::min(num_1,num_2);

    for (int i = menor + 1; i < maior; i++) {

        if (i % 2 != 0) {
            sum += i;
        }
    }
    return sum;
}


int main() {
    int casos_teste, num_1, num_2, result;

    std::cin >> casos_teste;

    for (int i{}; i < casos_teste; i++) {

        std::cin >> num_1 >> num_2;
        result = calculate_sum(num_1, num_2);

        std::cout << result << "\n";
    }
    return 0;
}

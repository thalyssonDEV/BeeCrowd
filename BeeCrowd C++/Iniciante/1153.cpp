#include <iostream>

int main() {
    int num, fat = 1;
    
    std::cin >> num;
    
    while (num > 0){
        fat *= num;
        num -= 1;
    }
    std::cout << fat << "\n";
    
    return 0;
}

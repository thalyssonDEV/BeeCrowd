#include <iostream>
using namespace std;

int main() {
    int x, y;
   
    cin >> x;
    cin >> y;
   
    int inicio, final;
   
    if (x < y) {
        inicio = x;
        final = y;
    } else {
        inicio = y;
        final = x;
    }
   
    for (int i = inicio + 1; i < final; i++) {
        if (i % 5 == 2 || i % 5 == 3) {
            cout << i << endl;
        }
    }
    return 0;
}

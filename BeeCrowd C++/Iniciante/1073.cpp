#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int N;

    cin >> N;

    for (int i = 1 ; i <= N ; i++){
        if (i % 2 == 0){
          int quadrado = pow(i,2);
          cout << i << "^" << "2" << " = " << quadrado << endl;
        }
    }
}

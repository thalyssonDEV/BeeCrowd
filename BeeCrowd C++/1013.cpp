#include <iostream>
using namespace std;

int main() {
    int A,B,C;

    cin >> A;
    cin >> B;
    cin >> C;

    int maior = (A+B+abs(A-B))/2;

    if (maior > C){
        cout << maior << " eh o maior" << endl;
    }
    else{
        cout << C << " eh o maior" << endl;
    }
}
#include <iostream>
#include <math.h>
using namespace std;

int main(){
  int N;

  cin >> N;
  
  for (int i=1 ; i <= N ; i++){
    int quadrado = pow(i,2);
    int cubo = pow(i,3);
    cout << i << " " << quadrado << " " << cubo << endl;
  }
}

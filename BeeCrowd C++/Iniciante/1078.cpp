#include <iostream>
using namespace std;

int main(){
  int N;

  cin >> N;

  int i = 1;
  while (i <= 10){
    int resultado = N * i;
    cout << i << " x " << N << " = " << resultado << endl;
    i++;
  }
  return 0;
}

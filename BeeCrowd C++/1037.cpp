#include <iostream>
using namespace std;

int main(){
  float N;

  cin >> N;

  if (N >= 0 && N <= 25){
    cout << "Intervalo [0,25]" << endl;
  
  }else if (N > 25 && N <= 50){
    cout << "Intervalo (25,50]" << endl;
  
  }else if (N > 50 && N <= 75){
    cout << "Intervalo (50,75]" << endl;
  
  }else if (N > 75 && N <= 100){
    cout << "Intervalo (75,100]" << endl;
  
  }else{
    cout << "Fora de intervalo" << endl;
  }
  return 0;
}

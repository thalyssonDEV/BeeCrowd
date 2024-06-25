#include <iostream>
using namespace std;

int main(){
  int X,N,i;

  cin >> N;
  
  i = 0;
  int in = 0;
  int out = 0;
  while (i < N){
    i++;
    cin >> X;
    if (X >= 10 && X <= 20){
      in++;
    }else{
      out++;
    }
  }
  cout << in << " in" << endl;
  cout << out << " out" << endl;
  return 0;
}

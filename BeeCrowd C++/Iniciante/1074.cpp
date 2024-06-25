#include <iostream>
using namespace std;

int main(){
  int N,X;

  cin >> N;
  
  int i = 0;
  while (i < N){
    i++;
    cin >> X;

    if (X == 0){
      cout << "NULL" << endl;
    }else{
      if (X % 2 == 0){
        cout << "EVEN";
      }if (X % 2 != 0){
        cout << "ODD";
      }if (X > 0){
        cout << " POSITIVE" << endl;
      }if (X < 0){
        cout << " NEGATIVE" << endl;
      }
    }
  }
  return 0;
}

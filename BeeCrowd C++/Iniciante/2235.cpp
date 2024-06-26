#include <iostream>
using namespace std;

int main(void){
  int a,b,c;

  cin >> a >> b >> c;

  if ((a == b || a == c || b == c) || (a+b == c || a+c == b || b+c == a)){
    cout << "S" << endl;
  }else{
    cout << "N" << endl;
  }
  return 0;
}

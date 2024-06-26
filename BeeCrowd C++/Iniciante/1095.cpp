#include <iostream>
using namespace std;

int main(){
  int i = 1;
  int j = 60;

  while (j >= 0){
    cout << "I=" << i << " " << "J=" << j << endl;
    i += 3;
    j -= 5;
  }
}

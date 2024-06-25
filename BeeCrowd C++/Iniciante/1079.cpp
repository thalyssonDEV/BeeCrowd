#include <iostream>
#include <iomanip>
using namespace std;

int main(){
  int N;
  float A,B,C;

  cin >> N;

  for (int i = 1 ; i <= N ; i++){
    cin >> A >> B >> C;

    float media_pond = ((A*2)+(B*3)+(C*5)) / 10;
    cout << fixed << setprecision(1) << media_pond << endl;
  }
  return 0;
}

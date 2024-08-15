#include <iostream>
#include <iomanip>
using namespace std;

int main(){
  float distancia;
  int diametro_1,diametro_2;

  cin >> distancia >> diametro_1 >> diametro_2;

  float soma_diametros = diametro_1 + diametro_2;
  float resultado_icm = distancia / soma_diametros;

  cout << setprecision(2) << fixed << resultado_icm << endl;

  return 0;
}

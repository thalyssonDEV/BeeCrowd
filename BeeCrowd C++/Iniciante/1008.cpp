#include <iostream>
#include <iomanip>
using namespace std;

int main(){
  int numero,horas;
  double recebe;

  cin >> numero;
  cin >> horas;
  
  cout << fixed << setprecision(2);
  cin >> recebe;

  double salario = horas * recebe;

  cout << "NUMBER = " << numero;
  cout << "\nSALARY = U$ " << salario << endl;
  return 0;
}

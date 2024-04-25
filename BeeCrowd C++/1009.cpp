#include <iostream>
#include <iomanip>
using namespace std;

int main(){
  string nome;
  double salario_fixo,total_vendas;

  cin >> nome;
  cin >> salario_fixo;
  cin >> total_vendas;
  
  cout << fixed << setprecision(2);
  
  double comissao = salario_fixo + (total_vendas*0.15);
    
  cout << "TOTAL = R$ " << comissao << endl;
  return 0;
}
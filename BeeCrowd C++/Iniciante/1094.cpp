#include <iostream>
#include <iomanip>
using namespace std;

int main(){
  int i,N,qtd,total_geral = 0;
  string cobaia;
  int qtd_coelhos = 0, qtd_ratos = 0, qtd_sapos = 0;

  cin >> N;

  for (i=1 ; i<=N ; i++){
    cin >> qtd >> cobaia;
    total_geral += qtd;

    if (cobaia == "C"){
      qtd_coelhos += qtd;
    
    }else if (cobaia == "R"){
      qtd_ratos += qtd;
    
    }else if (cobaia == "S"){
      qtd_sapos += qtd;
    } 
  }
  double percentual_coelhos = (qtd_coelhos / double(total_geral)) * 100;
  double percentual_ratos = (qtd_ratos / double(total_geral)) * 100;
  double percentual_sapos = (qtd_sapos / double(total_geral)) * 100;

  cout << "Total: " << total_geral << " cobaias" << endl;
  cout << "Total de coelhos: " << qtd_coelhos << endl;
  cout << "Total de ratos: " << qtd_ratos << endl;
  cout << "Total de sapos: " << qtd_sapos << endl;
  
  cout << fixed << setprecision(2);

  cout << "Percentual de coelhos: " << percentual_coelhos << " %" << endl;
  cout << "Percentual de ratos: " << percentual_ratos << " %" << endl;
  cout << "Percentual de sapos: " << percentual_sapos << " %" << endl; 
  return 0;
}

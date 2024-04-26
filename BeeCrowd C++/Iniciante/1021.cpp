#include <iostream>
#include <cmath>
using namespace std;

int main(){
  float valor;

  cin >> valor;
  int valor_int = int(valor); 

  // CÉDULAS 
  int cedulas_100 = valor_int / 100;
  int resto_100 = valor_int % 100;
  int cedulas_50 = resto_100 / 50;
  int resto_50 = resto_100 % 50;
  int cedulas_20 = resto_50 / 20;
  int resto_20 = resto_50 % 20;
  int cedulas_10 = resto_20 / 10;
  int resto_10 = resto_20 % 10;
  int cedulas_5 = resto_10 / 5;
  int resto_5 = resto_10 % 5;
  int cedulas_2 = resto_5 / 2;
  int resto_2 = resto_5 % 2;

  // MOEDAS
  int moedas_1 = resto_2;

  float valor_novo = (valor - valor_int)*100.0;
  int valor_decimal = round(valor_novo);

  int moedas_050 = valor_decimal / 50;
  int resto_moedas_050 = valor_decimal % 50;
  int moedas_025 = resto_moedas_050 / 25;
  int resto_moedas_025 = resto_moedas_050 % 25;
  int moedas_010 = resto_moedas_025 / 10;
  int resto_moedas_010 = resto_moedas_025 % 10;
  int moedas_005 = resto_moedas_010 / 5;
  int resto_moedas_005 = resto_moedas_010 % 5;
  int moedas_001 = resto_moedas_005;
  
  cout << "NOTAS:" << endl;
  cout << cedulas_100 << " nota(s) de R$ 100.00" << endl;
  cout << cedulas_50 << " nota(s) de R$ 50.00" << endl;
  cout << cedulas_20 << " nota(s) de R$ 20.00" << endl;
  cout << cedulas_10 << " nota(s) de R$ 10.00" << endl;
  cout << cedulas_5 << " nota(s) de R$ 5.00" << endl;
  cout << cedulas_2 << " nota(s) de R$ 2.00" << endl;

  cout << "MOEDAS:" << endl;
  cout << moedas_1 << " moeda(s) de R$ 1.00" << endl;
  cout << moedas_050 << " moeda(s) de R$ 0.50" << endl;
  cout << moedas_025 << " moeda(s) de R$ 0.25" << endl;
  cout << moedas_010 << " moeda(s) de R$ 0.10" << endl;
  cout << moedas_005 << " moeda(s) de R$ 0.05" << endl;
  cout << moedas_001 << " moeda(s) de R$ 0.01" << endl;
  
  return 0;
}

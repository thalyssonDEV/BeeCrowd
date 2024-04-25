#include <iostream>
using namespace std;

int main(){
  int valor;

  cin >> valor;

  int cedulas_100 = valor / 100;
  int resto_100 = valor % 100;
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
  int cedulas_1 = resto_2;

  cout << valor << endl;
  cout << cedulas_100 << " nota(s) de R$ 100,00" << endl;
  cout << cedulas_50 << " nota(s) de R$ 50,00" << endl;
  cout << cedulas_20 << " nota(s) de R$ 20,00" << endl;
  cout << cedulas_10 << " nota(s) de R$ 10,00" << endl;
  cout << cedulas_5 << " nota(s) de R$ 5,00" << endl;
  cout << cedulas_2 << " nota(s) de R$ 2,00" << endl;
  cout << cedulas_1 << " nota(s) de R$ 1,00" << endl;
  return 0;
}

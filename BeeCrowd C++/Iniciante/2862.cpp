#include <iostream>
#include <iomanip>
using namespace std;

int main(){
  int casos_teste,numero;

  cin >> casos_teste;

  for(int i = 0 ; i < casos_teste ; i++){
    cin >> numero;

    if(numero > 8000){
      cout << "Mais de 8000!" << endl;
    }else{
      cout << "Inseto!" << endl;
    }
  }
    
  return 0;
}

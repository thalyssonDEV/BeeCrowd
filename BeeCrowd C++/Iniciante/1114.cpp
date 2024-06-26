#include <iostream>
using namespace std;

int main(){
  int senha_correta,tentativa;

  senha_correta = 2002;

  tentativa = 0;
  while (tentativa != senha_correta){
    cin >> tentativa;

    if (tentativa != senha_correta){
      cout << "Senha Invalida" << endl;
    }else{
      cout << "Acesso Permitido" << endl;
    }
  }
  return 0;
}

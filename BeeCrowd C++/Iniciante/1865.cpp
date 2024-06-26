#include <iostream>
using namespace std;

int main(void){
    int força,testes;
    string nome;
    
    cin >> testes;
    
    for(int i = 0; i < testes; i++){
        cin >> nome >> força;
        
        if (nome == "Thor"){
            cout << "Y" << endl;
        }else{
            cout << "N" << endl;
        }
    }
    return 0;
}

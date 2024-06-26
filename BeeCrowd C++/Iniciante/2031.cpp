#include <iostream>
using namespace std;

void declarar_vencedor(int N){
    string jogador_1,jogador_2;
    
    for(int i=0; i < N; i++){
        cin >> jogador_1;
        cin >> jogador_2;
        
        if (jogador_1 == "ataque" && jogador_2 == "pedra"){
            cout << "Jogador 1 venceu" << endl;
        }if (jogador_1 == "pedra" && jogador_2 == "ataque"){
            cout << "Jogador 2 venceu" << endl;
        }if (jogador_1 == "pedra" && jogador_2 == "papel"){
            cout << "Jogador 1 venceu" << endl;
        }if (jogador_1 == "papel" && jogador_2 == "pedra"){
            cout << "Jogador 2 venceu" << endl;
        }if (jogador_1 == "papel" && jogador_2 == "ataque"){
            cout << "Jogador 2 venceu" << endl;
        }if (jogador_1 == "ataque" && jogador_2 == "papel"){
            cout << "Jogador 1 venceu" << endl;
        }if (jogador_1 == jogador_2){
            if (jogador_1 == "papel"){
                cout << "Ambos venceram" << endl;
            }else if (jogador_1 == "pedra"){
                cout << "Sem ganhador" << endl;
            }else{
                cout << "Aniquilacao mutua" << endl;
            }
        }
    }
}

int main(){
    int N;
    cin >> N;
    
    declarar_vencedor(N);
}

#include <iostream>
using namespace std;

int main(){
    int a,b;
    
    while (true){
        cin >> a >> b;
        
        if (a == b){
            break;
        }else{
            if (a>b){
                cout << "Decrescente" << endl;
            }else{
                cout << "Crescente" << endl;
            }
        }
    }
    return 0;
}

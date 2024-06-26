#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int experiencia,x;
    
    while (true){
        cin >> x >> experiencia;
        
        if (x == 0 && experiencia == 0){
            break;
        }else{
            int aumento = x * experiencia;
            cout << aumento << endl;
        }
    }
    return 0;
}

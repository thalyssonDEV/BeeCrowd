#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    float A,B;
    
    cin >> A >> B;
    
    float aumento = ((B-A) / A) * 100;
    
    cout << fixed << setprecision(2) << aumento << "%" << endl;
    return 0;
}

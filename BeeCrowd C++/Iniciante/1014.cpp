#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int X;
    float Y;
    
    cin >> X;
 
    cout << fixed << setprecision(3);
    
    cin >> Y;
    
    float consumo = X/Y;
    
    cout << consumo << " km/l" << endl;
    return 0;
}

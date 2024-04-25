#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main(){
    float x1,y1,x2,y2;

    cin >> x1 >> y1;
    cin >> x2 >> y2;
  
    cout << fixed << setprecision(4);

    float distancia = pow(((pow((x2-x1),2)) + (pow((y2-y1),2))),0.5);

    cout << distancia << endl;
    return 0;
}
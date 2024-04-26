#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main() {
    double R;
  
    cin >> R;

    double pi = 3.14159;
    cout << fixed << setprecision(3);
    double volume = (4.0/3)*pi*(pow(R,3));

    cout << "VOLUME = " << volume << endl;
    return 0;
}

#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main() {
    double R;

    cout << fixed << setprecision(4);
    cin >> R;

    double pi = 3.14159;
    double A = pi*(pow(R,2));

    cout << "A=" << A << endl;
    return 0;
}

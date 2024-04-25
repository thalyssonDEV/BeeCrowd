#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    double A, B, C;
    cin >> A >> B >> C;

    double delta = (B * B) - (4 * A * C);

    if (delta < 0 || A == 0) {
        cout << "Impossivel calcular" << endl;
    } else {
        cout << fixed << setprecision(5);

        double r1 = (-B + sqrt(delta)) / (2 * A);
        double r2 = (-B - sqrt(delta)) / (2 * A);

        cout << "R1 = " << r1 << endl;
        cout << "R2 = " << r2 << endl;
    }
    return 0;
}

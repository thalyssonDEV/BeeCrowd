#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double A,B;

    cout << fixed << setprecision(5);

    cin >> A;
    cin >> B;

    double MEDIA = ((A*3.5)+(B*7.5))/11;

    cout << "MEDIA = " << MEDIA << endl;
    return 0;
}

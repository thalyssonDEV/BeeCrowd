#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    float n1, n2, n3, n4, nota_exame;

    cin >> n1 >> n2 >> n3 >> n4;

    cout << fixed << setprecision(1);

    float media = ((n1 * 2) + (n2 * 3) + (n3 * 4) + (n4 * 1)) / 10;
    cout << "Media: " << media << endl;

    if (media < 5) {
        cout << "Aluno reprovado." << endl;
    } else if (media >= 7) {
        cout << "Aluno aprovado." << endl;
    } else {
        cout << "Aluno em exame." << endl;
        
        cin >> nota_exame;

        float media_final = (nota_exame + media) / 2;

        cout << "Nota do exame: " << nota_exame << endl;
        
        if (media_final >= 5) {
            cout << "Aluno aprovado." << endl;
        } else {
            cout << "Aluno reprovado." << endl;
        }
        cout << "Media final: " << media_final << endl;
    }
    return 0;
}

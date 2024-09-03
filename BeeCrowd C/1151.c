#include <stdio.h>

int main() {
    int valor1, valor2, resultadoTemporario, sequencia, primeiro;

    scanf("%d",&sequencia);

    valor1 = 1;
    valor2 = 0;
    primeiro = 1;
    for (int i = 0; i < sequencia; i++) {
        resultadoTemporario = valor1 + valor2;
        valor1 = valor2;
        valor2 = resultadoTemporario;

        if (!primeiro) {
            printf(" ");
        }
        printf("%d", valor1);

        primeiro = 0;
    }
    printf("\n");

    return 0;
}

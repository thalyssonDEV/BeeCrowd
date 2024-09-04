#include <cstdio>
#include <string>
#include <list>
#include <cstdlib>

// Função para limpar a tela
void limparTela() {
#ifdef _WIN32
    system("cls"); // Comando para limpar a tela no Windows
#else
    system("clear"); // Comando para limpar a tela no Unix/Linux/Mac
#endif
}


void showList(std::list<int> &minhaLista) {
    int count{};

    printf("Lista Atual --> ");
    printf("[");
    for (int chr : minhaLista) {

        if (count < minhaLista.size() - 1) {
            printf("%d, ", chr);
        }else {
            printf("%d", chr);
        }
        count++;
    }
    printf("]\n");
}

int main() {
    int tamanhoLista, elementos;
    std::list<int> minhaLista{};

    printf("======= BEM VINDO AO MANIPULADOR DE LISTAS ========\n");

    printf("Digite a Quantidade de Elementos da Lista:\n");
    scanf("%d", &tamanhoLista);

    printf("Digite os Elementos Separados Por Espaço:\n");

    for (int i{}; i < tamanhoLista; i++) {

        scanf("%d", &elementos);
        minhaLista.push_back(elementos);
    }
    showList(minhaLista);

    int choice = 1;
    while (choice != 0) {
        printf("Digite a Funcionalidade:\n");
        scanf("%d", &choice);

        switch (choice) {

            case 1:
                int qtdNumeros;

                printf("Quantos Números Deseja Adicionar:\n");
                scanf("%d", &qtdNumeros);

                int numerosAdd;
                for (int i = 0; i < qtdNumeros; i++) {
                    scanf("%d", &numerosAdd);

                    minhaLista.push_back(numerosAdd);
                }
                showList(minhaLista);
        }
    }
}

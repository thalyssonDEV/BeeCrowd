#include <cstdio>
#include <string>
#include <list>
#include <cstdlib>

void showMenu(){
    printf("========== MENU ========\n");
    printf("[ 1 ] - ADICIONAR NÚMEROS\n");
    printf("[ 2 ] - REMOVER NÚMEROS\n");
    printf("[ 3 ] - VER QUANTIDADE DE ITENS NO VETOR");


}


// Função para limpar a tela
void limparTela() {
#ifdef _WIN32
    system("cls"); // Comando para limpar a tela no Windows
#else
    system("clear"); // Comando para limpar a tela no Unix/Linux/Mac
#endif
}


int quantity_items(std::list<int> &meuVetor) {
    return meuVetor.size();
}

void addNumbers(std::list<int> &meuVetor, int numerosToAdd) {
    meuVetor.push_back(numerosToAdd);
}

void removeNumbers(std::list<int> &meuVetor, int numerosToRemove) {
    meuVetor.remove(numerosToRemove);
}

void showList(const std::list<int> &meuVetor) {
    int count{};

    printf("\nLista Atual --> ");
    printf("[");
    for (int chr : meuVetor) {

        if (count < meuVetor.size() - 1) {
            printf("%d, ", chr);
        }else {
            printf("%d", chr);
        }
        count++;
    }
    printf("]\n\n");
}

int main() {
    int tamanhoLista, elementos;
    std::list<int> meuVetor{};

    printf("======= BEM VINDO AO MANIPULADOR DE LISTAS ========\n");
    printf("===================================================\n\n");

    printf("Digite a Quantidade de Elementos da Lista:\n");
    scanf("%d", &tamanhoLista);

    printf("\nDigite os Elementos Separados Por Espaço:\n");

    for (int i{}; i < tamanhoLista; i++) {

        scanf("%d", &elementos);
        meuVetor.push_back(elementos);
    }
    showMenu();

    int choice = 1;
    while (choice != 0) {
        showList(meuVetor);

        printf("Digite a Funcionalidade:\n");
        scanf("%d", &choice);

        switch (choice) {

            case 1:
                int qtdNumerosToAdd, numerosToAdd;

                printf("Quantos Números Deseja Adicionar:\n");
                scanf("%d", &qtdNumerosToAdd);

                printf("Digite os Números Separados Por Espaço:\n");
                for (int i{}; i < qtdNumerosToAdd; i++) {
                    scanf("%d", &numerosToAdd);
                    addNumbers(meuVetor, numerosToAdd);
                }
                break;

            case 2:
                int qtdNumerosToRemove, numerosToRemove;

                printf("Quantos Números Deseja Remover:\n");
                scanf("%d", &qtdNumerosToRemove);

                printf("Digite os Números Separados Por Espaço:\n");
                for (int i{}; i < qtdNumerosToRemove; i++){
                    scanf("%d", &numerosToRemove);
                    removeNumbers(meuVetor,numerosToRemove);
                }
                break;

            case 3:
                int qtd_itens = quantity_items(meuVetor);

                printf("QUANTIDADE DE ITENS --> %d\n", qtd_itens);

        }
    }
}

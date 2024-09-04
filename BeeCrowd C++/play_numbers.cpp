#include <cstdio>
#include <string>
#include <list>
#include <cstdlib>

void showMenu(){
    printf("========== MENU ========\n");
    printf("[ 1 ] - ADICIONAR NÚMEROS\n");
    printf("[ 2 ] - REMOVER NÚMEROS\n");
    
    
}


// Função para limpar a tela
void limparTela() {
#ifdef _WIN32
    system("cls"); // Comando para limpar a tela no Windows
#else
    system("clear"); // Comando para limpar a tela no Unix/Linux/Mac
#endif
}


void addNumbers(const std::list<int> &minhaLista, int &numerosToAdd) {
    minhaLista.push_back(numerosToAdd);
}


void removeNumbers() {
    
}



void showList(const std::list<int> &minhaLista) {
    int count{};

    printf("\nLista Atual --> ");
    printf("[");
    for (int chr : minhaLista) {

        if (count < minhaLista.size() - 1) {
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
    std::list<int> minhaLista{};

    printf("======= BEM VINDO AO MANIPULADOR DE LISTAS ========\n");
    printf("===================================================\n\n");

    printf("Digite a Quantidade de Elementos da Lista:\n");
    scanf("%d", &tamanhoLista);

    printf("\nDigite os Elementos Separados Por Espaço:\n");

    for (int i{}; i < tamanhoLista; i++) {

        scanf("%d", &elementos);
        minhaLista.push_back(elementos);
    }
    
    showList(minhaLista);
    
    showMenu();

    int choice = 1;
    while (choice != 0) {
        printf("Digite a Funcionalidade:\n");
        scanf("%d", &choice);

        switch (choice) {

            case 1:
                int qtdNumerosToAdd, numerosToAdd;

                printf("Quantos Números Deseja Adicionar:\n");
                scanf("%d", &qtdNumerosToAdd);

                printf("Digite os Elementos Separados Por Espaço:\n");
                for (int i{}; i < qtdNumerosToAdd; i++) {
                    scanf("%d", &numerosToAdd);
                    addNumbers(minhaLista, numerosToAdd);
                }
                showList(minhaLista);
                break;
                
            case 2:
                int qtdNumerosToRemove, numerosToRemove;
                
                printf("Quantos Números Deseja Remover:\n");
                scanf("%d", &qtdNumerosToRemove);
                
                printf("Digite os Elementos Separados Por Espaço:\n");
                for (int i{}; i < qtdNumerosToRemove; i++){
                    scanf("%d", &numerosToRemove);
                }
                
        }
    }
}
